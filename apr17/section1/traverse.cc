#include <iostream>
#include <BinarySearchTree.h>

using namespace std;
using namespace cs102;

class MyVisitor : public BinarySearchTree::NodeVisitor {
public:
  MyVisitor() {
    _sum = "";
  }
  virtual void visit(const BinarySearchTree::Key& key,
		     BinarySearchTree::Value& value) {
    _sum += key;
    value = key + "' value";
  }
  string _sum;
};

int main() {
  BinarySearchTree tree;
  MyVisitor visitor;


  tree.insert("b", "1's value");
  tree.insert("a", "1's value");
  tree.insert("c", "1's value");

  cout << tree << endl;

  tree.inorder(visitor);

  cout << visitor._sum << endl;

  cout << tree << endl;
}
