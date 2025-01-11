#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(int N, vector<int>& A) {
    // Since mochi are already sorted in ascending order,
    // we need to find maximum number of valid pairs where one is at most half of other
    
    int count = 0;
    // We'll use two pointers: left for smaller mochi, right for larger mochi
    int left = 0;
    int right = N - 1;
    
    while (left < right) {
        // Check if current pair can form kagamimochi
        // A[left] should be at most half of A[right]
        if (A[left] * 2 <= A[right]) {
            // Valid pair found
            count++;
            left++;
            right--;
        } else {
            // If current left mochi is too big,
            // move to next larger mochi on right
            right--;
        }
    }
    
    return count;
}

int main() {
    // Read input
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // Print result
    cout << solve(N, A) << endl;
    
    return 0;
}