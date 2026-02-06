#include <iostream>

using namespace std;

size_t length(string str) {
  cout << "Length called with: `" << str << "'" << endl;

  size_t result = 0;
  if (str == "") {
    result = 0;
  }
  else {
    result = 1 + length(str.substr(1));
  }

  cout << "Length of `" << str << "' is " << result << endl;
  return result;
}

size_t occurs(string str, char c) {
  size_t result = 0;
  
  if (str == "") {
    result = 0;
  }
  else {
    if (str[0] == c) {
      result = 1 + occurs(str.substr(1), c);
    }
    else {
      result = occurs(str.substr(1), c);
    }
  }
  return result;
}

string reverse(string str) {
  string result = "";
  if (str.length() < 2)
    result = str;
  else {
    result = str[str.length() - 1] + str.substr(1, str.length() - 2) + str[0];
  }
  return result;
}

int main() {
  //  cout << length("Hello") << endl;
  //  cout << occurs("Committee", 'X') << endl;
  cout << reverse("Committee") << endl;
  return 0;
}
