#include <iostream>
using namespace std;

int main() {
    int T, P;
    cin >> T >> P;
    
    int change = P - T;

    if (change & 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
