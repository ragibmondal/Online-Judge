#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

int main() {
    long long n;
    int k;
    cin >> n >> k;

    vector<int> powers;
    
    for (int i = 0; (1LL << i) <= n; ++i) {
        if (n & (1LL << i)) {
            powers.push_back(1LL << i);
        }
    }

    int currentSize = powers.size();
    
    if (k < currentSize || k > n) {
        cout << "NO" << endl;
        return 0;
    }
    int index = 0;
    while (currentSize < k) {
        while (powers[index] == 1) index++;
        powers.push_back(powers[index] / 2);
        powers[index] /= 2;
        currentSize++;
    }
    cout << "YES" << endl;
    for (int power : powers) {
        cout << power << " ";
    }
    cout << endl;

    return 0;
}
