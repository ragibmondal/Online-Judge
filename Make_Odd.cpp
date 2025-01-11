#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;
        int M = 0;
        int C = 0;
        for (int i = 0; i < N; ++i) {
            if (A[i] == '1' && B[i] == '1') {
                M++;
            } else if (A[i] != B[i]) {
                C++;
            }
        }
        if (C >= 1) {
            cout << "YES" << endl;
        } else {
            if (M % 2 == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}