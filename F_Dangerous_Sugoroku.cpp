#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    long long n;
    int m, a, b;
    cin >> n >> m >> a >> b;

    vector<pair<long long, long long>> bad_ranges(m);
    for (int i = 0; i < m; ++i) {
        cin >> bad_ranges[i].first >> bad_ranges[i].second;
    }

    queue<long long> q;
    q.push(1);
    vector<bool> vis(min((long long)1000000, n) + 1, false);
    
    if (n <= 1000000)
        vis[1] = true;

    while (!q.empty()) {
        long long c = q.front(); 
        q.pop();

        if (c == n) {
            cout << "Yes" << endl;
            return 0;
        }

        for (int step = a; step <= b; ++step) {
            long long nxt = c + step;

            if (nxt > n) {
                continue;
            }

            bool is_bad = false;
            for (int j = 0; j < m; ++j) {
                if (nxt >= bad_ranges[j].first && nxt <= bad_ranges[j].second) {
                    is_bad = true;
                    break;
                }
            }

            if (!is_bad) {
                if (n <= 1000000) {
                    if (!vis[nxt]) {
                        vis[nxt] = true;
                        q.push(nxt);
                    }
                } else {
                    bool can_reach_bad = false;
                    for (auto range : bad_ranges) {
                        if (nxt < range.first) {
                            can_reach_bad = true;
                            break;
                        }
                    }
                    if (nxt == n || can_reach_bad)
                        q.push(nxt);
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
