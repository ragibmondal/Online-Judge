#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(long long N) {
    if (N <= 1) return false;         // 1 and below are not prime
    if (N <= 3) return true;          // 2 and 3 are prime
    if (N % 2 == 0 || N % 3 == 0) return false; // Eliminate multiples of 2 and 3
    
    // Check divisors from 5 to sqrt(N) skipping multiples of 2 and 3
    for (long long i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    long long N;
    cin >> N;

    if (isPrime(N))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
