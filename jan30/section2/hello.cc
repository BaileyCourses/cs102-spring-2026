#include <iostream>

using namespace std;

string reverse(string& str) {
    string result = "";

    for (size_t i = 0; i < str.length(); i++) {
        result = str[i] + result;
    }
    str = result;
    return result;
}
int main() {
    string s;

    cout << "Enter a string to be reversed: ";
    cin >> s;
    
    string rs = reverse(s);

    cout << "Here is the reversed string: " << rs << endl;
    cout << "By the way, s is: " << s << endl;
    return 0;
}
