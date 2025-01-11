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
    vector<bool> visited(min((long long)1000000, n) + 1, false);
    
    if (n <= 1000000)
      visited[1] = true;

    while (!q.empty()) {
        long long current_square = q.front();
        q.pop();

        if (current_square == n) {
            cout << "Yes" << endl;
            return 0;
        }

        for (int i = a; i <= b; ++i) {
            long long next_square = current_square + i;

            if (next_square > n) {
                continue;
            }

            bool is_bad = false;
            for (int j = 0; j < m; ++j) {
                if (next_square >= bad_ranges[j].first && next_square <= bad_ranges[j].second) {
                    is_bad = true;
                    break;
                }
            }

            if (!is_bad) {
                if (n <= 1000000) {
                   if (!visited[next_square]) {
                      visited[next_square] = true;
                      q.push(next_square);
                    }
                } else {
                     bool can_reach_bad = false;
                     for(auto range : bad_ranges){
                          if(next_square < range.first){
                               can_reach_bad = true;
                               break;
                           }

                       }
                     if(next_square == n || can_reach_bad)
                           q.push(next_square);
                 }

             
            }
        }
    }

    cout << "No" << endl;

    return 0;
}