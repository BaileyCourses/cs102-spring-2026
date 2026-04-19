#include <iostream>
#include <WordBank.h>

using namespace std;

class Demo {
public:
  Demo(size_t size);
private:
  WordBank _bank;
};

Demo::Demo(size_t size) : _bank(size, size) {
};

int main() {
  Demo demo(5);
  return 0;
}
