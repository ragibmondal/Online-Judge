#include <iostream>
#include <string>
#include <set>
using namespace std;

bool willMeetRedQueen(int n, int a, int b, const string& s) {
    int x = 0, y = 0;
    set<pair<int, int>> visited;
    visited.insert({x, y});

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'N') y++;
        else if (s[i] == 'E') x++;
        else if (s[i] == 'S') y--;
        else if (s[i] == 'W') x--;
        visited.insert({x, y});
    }

    if (visited.count({a, b})) {
        return true;
    }

    int dx = x, dy = y;

    for (int i = 0; i < 1000; ++i) {
        if (visited.count({a - dx * i, b - dy * i})) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        string s;
        cin >> n >> a >> b >> s;
        if (willMeetRedQueen(n, a, b, s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}