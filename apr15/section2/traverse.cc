#include <iostream>
#include <BinarySearchTree.h>

using namespace std;
using namespace cs102;

class MyVisitor : public BinarySearchTree::NodeVisitor {
public:
  virtual void visit(const BinarySearchTree::Key& key,
		     BinarySearchTree::Value& value) {
    cout << key << endl;
  }
};

int main() {
  MyVisitor visitor;

  BinarySearchTree tree;

  tree.insert("1", "1's value");
  tree.insert("20", "1's value");
  tree.insert("100", "1's value");
  tree.insert("10", "1's value");
  
  cout << tree;
	     
  tree.inorder(visitor);

}
