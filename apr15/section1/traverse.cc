#include <iostream>
#include <BinarySearchTree.h>

using namespace std;
using namespace cs102;

class MyVisitor : public BinarySearchTree::NodeVisitor {
public:
  virtual void visit(const Key& key, Value& value) {
  }
};

MyVisitor mine;

int main() {
  BinarySearchTree tree;

  tree.insert("1", "1's value");
  tree.insert("10", "1's value");
  tree.insert("20", "1's value");

  cout << tree << endl;
}
