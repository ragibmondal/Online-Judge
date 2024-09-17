#include <iostream>
#include <cmath>
using namespace std;

int minimumPresses(int n, int x, int y, int d) {

    if (abs(y - x) % d == 0) {
        return abs(y - x) / d;
    }


    int result = 1e9;


        result = min(result, (x - 1 + d - 1) / d + (y - 1) / d);
    }

    if ((n - y) % d == 0) {

        result = min(result, (n - x + d - 1) / d + (n - y) / d);
    }


    return result == 1e9 ? -1 : result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y, d;
        cin >> n >> x >> y >> d;
        cout << minimumPresses(n, x, y, d) << endl;
    }
    return 0;
}
