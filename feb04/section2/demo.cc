#include <iostream>

using namespace std;

void printArray(string values[], size_t size) {

  for (size_t i = 0; i < size; i++) {
    cout << values[i] << endl;
  }
}


int main() {
  const size_t nsize = 4;
  string names[nsize];

  for (size_t i = 0; i < nsize; i++) {
    cin >> names[i];
  }

  printArray(names, nsize);


  return 0;
}
