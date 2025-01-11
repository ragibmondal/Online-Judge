#include <bits/stdc++.h>
using namespace std;
int main(){int T;
    cin >> T;

    while (T--) {
        int N; 
        cin >> N;

        vector<int> A(N); 
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        vector<int> happy(N, 0);

        int maxScore = -1;
        for (int i = 0; i < N; i++) {
            if (A[i] > maxScore) {
                happy[i] = 1;
                maxScore = A[i];
            }
        }

        for (int i = 0; i < N; i++) {
            cout << happy[i] << (i == N - 1 ? '\n' : ' ');
        }
    }
    }