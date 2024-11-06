#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s); 

    size_t pos = s.find('\\'); 
    if (pos != string::npos) {
        cout << s.substr(0, pos) << endl;  
    }

    return 0;
}
