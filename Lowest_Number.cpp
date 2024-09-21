#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int lowest = arr[0];
    int position = 1;
    
    for(int i = 1; i < N; i++) {
        if(arr[i] < lowest) {
            lowest = arr[i];
            position = i + 1;
        }
    }
    
    cout << lowest << " " << position << endl;
    
    return 0;
}
