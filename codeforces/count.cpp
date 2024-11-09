#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int sum = 0;
    for(char digit : s) {
        sum += (digit - '0');
    }
    
    cout << sum << endl;
    return 0;
}