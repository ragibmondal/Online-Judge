#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
    char ch;
    cin >> n;
    int anton = 0, danik = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        if (ch == 'A')
            anton++;
        else
            danik++;
    }
    if (anton == danik)
        cout << "Friendship\n";
    else if (anton > danik)
        cout << "Anton\n";
    else
        cout << "Danik\n";

    return 0;
}