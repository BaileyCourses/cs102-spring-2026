#include <iostream>

using namespace std;

string func(string str) {
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


  return str.substr(begin, end - begin);
}

int main() {
  string s = "This is my favorite string";

  cout << func(s) << endl;

}
