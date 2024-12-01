#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> lds;

    for (int i = 0; i < n; i++) {
        auto it = upper_bound(lds.begin(), lds.end(), arr[i], greater<int>());

        if (it == lds.end()) {
            lds.push_back(arr[i]);
        } else {
            *it = arr[i];
        }
    }

    cout << lds.size() << endl;

    return 0;
}
