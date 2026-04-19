#include "BinarySearchTree.h"

using namespace std;

#include <iostream>

// The usual Node utility class

BinarySearchTree::Node::Node(const Key& key, const Value& value,
     Node* left, Node* right) {
}

// The constructor

BinarySearchTree::BinarySearchTree() {
  _root = nullptr;
  _size = 0;
}

// The copy constructor

BinarySearchTree::BinarySearchTree(const BinarySearchTree& other) {
}

// The assignment operator

BinarySearchTree& BinarySearchTree::operator = (const BinarySearchTree& other) {
  return *this;
}

// The destructor

BinarySearchTree::~BinarySearchTree() {
}

// size: returns the number of nodes in the binary search tree
//
// PRE:  None.
// POST: The number of nodes in the binary search tree is returned

size_t BinarySearchTree::size() const {
  return 0;
}

// empty: returns whether a binary search tree has no nodes
//
// PRE:  None.
// POST: Returns false if the binary search tree has no nodes, false
// otherwise.

bool BinarySearchTree::empty() const {
  return true;
}

// insert: inserts a key/value pair into the binary search tree
//
// PRE:  None.
// POST: The key and value are inserted into a new node of the binary
// search tree

void BinarySearchTree::insert(const Key& key, const Value& value) {
}

// search: searches for a key in the binary search tree
//
// PRE:  None.
// POST: Returns true if the key is found in the tree and sets the value
// to the associated value. Otherwise, false is returned.

bool BinarySearchTree::search(const Key& key, Value& value) const {
  return true;
}

// contains: returns whether a key is in the binary search tree
//
// PRE:  None.
// POST: Returns true if the key is found in the tree. Otherwise, false
// is returned.

bool BinarySearchTree::contains(const Key& key) const {
  return true;
}

// remove: removes a key and value from the binary search tree
//
// PRE:  The key is in the tree
// POST: The key and associated value are removed from the tree

bool BinarySearchTree::remove(const Key& key) {
  return true;
}

// min: returns the minimum key in the tree
//
// PRE:  The tree is not empty
// POST: The key with the minimum value is returned

BinarySearchTree::Key BinarySearchTree::min() const {
  return "";
}

// man: returns the maximum key in the tree
//
// PRE:  The tree is not empty
// POST: The key with the maximum value is returned

BinarySearchTree::Key BinarySearchTree::max() const {
  return "";
}

// print: inserts a string representation of the tree into the stream
//
// PRE:  None.
// POST: The string representation has been inserted into the stream
// The string representation includes 1 line per node and is printed in
// right-to-left order. The tree created by inserting the key/value
// pairs: "50"/"1", "25"/"2", "75"/"10" is:
//  75:10
// 50:1
//  25:2
// An empty tree inserts nothing into the stream.
  
void BinarySearchTree::print(std::ostream& stream) const {
  stream << "Root = " << _root << endl;
}

// inorder: visits each node in the tree in order.
//
// PRE:  None.
// POST: Each node has been "visited" by calling the visit method of the
// NodeVisitor, in order, and passing each key/value pair to the method. 

void BinarySearchTree::inorder(NodeVisitor& visitor) {
}

// preorder: visits each node in the tree in pre-order.
//
// PRE:  None.
// POST: Each node has been "visited" by calling the visit method of the
// NodeVisitor, in pre-order, and passing each key/value pair to the method. 

void BinarySearchTree::preorder(NodeVisitor& visitor) {
}

// postorder: visits each node in the tree in post-order.
//
// PRE:  None.
// POST: Each node has been "visited" by calling the visit method of the
// NodeVisitor, in post-order, and passing each key/value pair to the method. 

void BinarySearchTree::postorder(NodeVisitor& visitor) {
}

void BinarySearchTree::copy(const BinarySearchTree& other) {
}
void BinarySearchTree::destroy() {
}

std::ostream& operator << (std::ostream& stream, const BinarySearchTree& tree) {
  tree.print(stream);
  return stream;
}
