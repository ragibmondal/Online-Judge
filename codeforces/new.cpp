#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    
    string nums = "";
    // Extract only numbers
    for(char c : a) {
        if(c != '+') nums += c;
    }
    
    // Sort only the numbers
    sort(nums.begin(), nums.end());
    
    // Print with + between numbers
    for(int i = 0; i < nums.length(); i++) {
        cout << nums[i];
        if(i < nums.length()-1) cout << "+";
    }
    cout << endl;
    
    return 0;
}