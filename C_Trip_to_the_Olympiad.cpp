#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        // Choose a = r, b = r - 1, c = l
        int a = r-1;
        int b = r;
        int c = l;
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}