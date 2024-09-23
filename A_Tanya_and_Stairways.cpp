#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> steps; 
    int count = 0;


    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) {
            count++;
        }
    }

    int stepCount = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
    
            if(stepCount > 0) {
                steps.push_back(stepCount);
            }
            stepCount = 1;
        } else {
            stepCount++;
        }
    }

    if(stepCount > 0) {
        steps.push_back(stepCount);
    }

    cout << count << "\n";
    for(int s : steps) {
        cout << s << " ";
    }
    cout << "\n";

    return 0;
}

