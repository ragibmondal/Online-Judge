#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    int wins = 0;
    stack<char> letters;
    
    for (char c : s) {
        if (!letters.empty() && letters.top() == c) {
            wins++;
            letters.pop();
        } else {
            letters.push(c);
        }
    }
    
    wins % 2 == 0 ? cout << "No" << endl : cout << "Yes" << endl;
    return 0;
}