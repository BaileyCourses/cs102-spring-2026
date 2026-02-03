#include <iostream>

using namespace std;

string func(string str) {
  string result = "";
  size_t begin = 0;

  while (str[begin] != ' ') {
    begin++;
  }

  while (str[begin] == ' ') {
    begin++;
  }

  size_t end = begin;

  while (str[end] != ' ') {
    end++;
  }

  result = str.substr(begin, end - begin);

  return result;
}

int main() {
  string s = "This is my first string!";

  cout << func(s) << endl;

  return 0;
}
