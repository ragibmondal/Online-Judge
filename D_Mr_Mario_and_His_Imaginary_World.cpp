#include <iostream>
using namespace std;

int main() {
    int T, P;
    cin >> T >> P;
    
    int change = P - T;

    // Check if the second bit is set in the change amount
    if (change & 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
