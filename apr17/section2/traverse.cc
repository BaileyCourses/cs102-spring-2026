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
    value = key + "'s value";
  }
    string _sum;
};

int main() {
  MyVisitor visitor;

  BinarySearchTree tree;

  tree.insert("m", "1's value");
  tree.insert("k", "1's value");
  tree.insert("o", "1's value");
  tree.insert("n", "1's value");
  
  cout << tree;
	     
  tree.inorder(visitor);

  cout << visitor._sum << endl;

  cout << tree;
}
