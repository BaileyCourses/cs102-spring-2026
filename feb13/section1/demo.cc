#include <iostream>
#include <WordBank.h>

using namespace std;

class Demo {
public:
  Demo();
private:
  WordBank _bank;
};

Demo::Demo() : _bank(5, 5) {
  cout << _bank.size();
}

int main() {
  Demo demo;

  return 0;
}
