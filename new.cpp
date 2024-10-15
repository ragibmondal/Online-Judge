#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int start38_count = 0;
        int ltime108_count = 0;
        
        for (int i = 0; i < N; i++) {
            string contest;
            cin >> contest;
            if (contest == "START38") {
                start38_count++;
            } else if (contest == "LTIME108") {
                ltime108_count++;
            }
        }
        
        cout << start38_count << " " << ltime108_count << endl;
    }
    
    return 0;
}