#include <iostream>

using namespace std;

string reverse(string& str) {
    string result = "";

    for (size_t i = 0; i < str.length(); i++){
        result = str[i] + result;
    }
    str = result;
    return str;
}

int main() {
    string s;

    cout << "Enter a string to reverse: ";
    cin >> s;

    string rs = reverse(s);

    s = reverse(s);
    
    cout << "This is the reverse: " << rs << endl;
    cout << "Oh and by the way, s is: " << s << endl;
    return 0;
}
