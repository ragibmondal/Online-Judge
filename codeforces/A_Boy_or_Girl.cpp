#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    set<int> st;
    for (char ch : str)
    {
        st.insert(ch);
    }
    int length = st.size();

    if (length % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}