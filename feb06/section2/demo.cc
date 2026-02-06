#include <iostream>

using namespace std;

size_t length(string str) {
  cout << "Length called with: \"" << str << "\"" << endl;

  size_t result = 0;
  if (str == "") {
    result = 0;
  }
  else {
    result = 1 + length(str.substr(1));
  }

  cout << "Length of \"" << str << "\" is " << result << endl;
  return result;
}


int main() {
  cout << length("Hello") << endl;
  return 0;
}
