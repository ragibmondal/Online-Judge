#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{ 
    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<int> b = a;
        sort(b.begin(), b.end());

        for (int i = 1; i < n; i++) {
            if (a[i - 1] - a[i] == 1) {
                swap(a[i - 1], a[i]);
                i++;
            }
        }

        cout << (a == b ? "YES" : "NO") << endl;
    }
    return 0;
}
