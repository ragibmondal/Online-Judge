#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        vector<string> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        int tl = 0;
        int maxw = 0;
        for (int i = 0; i < a; i++)
        {
            if (tl + v[i].length() <= b)
            {
                tl += v[i].length();
                maxw++;
            }
            else
            {
                break;
            }
        }
        cout << maxw << endl;
    }
    return 0;
}