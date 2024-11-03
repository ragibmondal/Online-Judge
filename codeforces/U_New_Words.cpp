#include <iostream>
#include <string>
#include <algorithm> // for min

using namespace std;

int main() {
    string s;
    cin >> s;
    int countE = 0, countG = 0, countY = 0, countP = 0, countT = 0;


    for (char ch : s) {
        ch = tolower(ch);
        if (ch == 'e') countE++;
        else if (ch == 'g') countG++;
        else if (ch == 'y') countY++;
        else if (ch == 'p') countP++;
        else if (ch == 't') countT++;
    }

    int result = min({countE, countG, countY, countP, countT});

    cout << result << endl;

    return 0;
}
