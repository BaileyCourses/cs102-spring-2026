#if !defined(BINARYSEARCHTREE_H)
#define BINARYSEARCHTREE_H

#include <iostream>

class BinarySearchTree {
public:
  typedef std::string Key;		// BinarySearchTrees have a key
  typedef std::string Value;		// and an associated value
  class Node {
  public:

    // The usual Node utility class

    Node(const Key& key, const Value& value,
	 Node* left = nullptr, Node* right = nullptr);
    Key _key;
    Value _value;
    Node* _left;
    Node* _right;
  };

  // A member of the NodeVisitor class can define visit to do anything
  // it wants. One extends this class with a subclass that defines visit
  // and any applicable state. 

  class NodeVisitor {
  public:
    virtual void visit(const Key& key, Value& value) = 0;
  private:
  };

  // The constructor

  BinarySearchTree();

  // The copy constructor

  BinarySearchTree(const BinarySearchTree& other);

  // The assignment operator

  BinarySearchTree& operator = (const BinarySearchTree& other);

  // The destructor

  ~BinarySearchTree();

  // size: returns the number of nodes in the binary search tree
  //
  // PRE:  None.
  // POST: The number of nodes in the binary search tree is returned

  size_t size() const;

  // empty: returns whether a binary search tree has no nodes
  //
  // PRE:  None.
  // POST: Returns false if the binary search tree has no nodes, false
  // otherwise.

  bool empty() const;

  // insert: inserts a key/value pair into the binary search tree
  //
  // PRE:  None.
  // POST: The key and value are inserted into a new node of the binary
  // search tree

  void insert(const Key& key, const Value& value);

  // search: searches for a key in the binary search tree
  //
  // PRE:  None.
  // POST: Returns true if the key is found in the tree and sets the value
  // to the associated value. Otherwise, false is returned.

  bool search(const Key& key, Value& value) const;

  // contains: returns whether a key is in the binary search tree
  //
  // PRE:  None.
  // POST: Returns true if the key is found in the tree. Otherwise, false
  // is returned.

  bool contains(const Key& key) const;

  // remove: removes a key and value from the binary search tree
  //
  // PRE:  The key is in the tree
  // POST: The key and associated value are removed from the tree

  bool remove(const Key& key);

  // min: returns the minimum key in the tree
  //
  // PRE:  The tree is not empty
  // POST: The key with the minimum value is returned

  Key min() const;

  // man: returns the maximum key in the tree
  //
  // PRE:  The tree is not empty
  // POST: The key with the maximum value is returned

  Key max() const;

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
  
  void print(std::ostream& stream) const;

  // inorder: visits each node in the tree in order.
  //
  // PRE:  None.
  // POST: Each node has been "visited" by calling the visit method of the
  // NodeVisitor, in order, and passing each key/value pair to the method. 

  void inorder(NodeVisitor& visitor);

  // preorder: visits each node in the tree in pre-order.
  //
  // PRE:  None.
  // POST: Each node has been "visited" by calling the visit method of the
  // NodeVisitor, in pre-order, and passing each key/value pair to the method. 

  void preorder(NodeVisitor& visitor);

  // postorder: visits each node in the tree in post-order.
  //
  // PRE:  None.
  // POST: Each node has been "visited" by calling the visit method of the
  // NodeVisitor, in post-order, and passing each key/value pair to the method. 

  void postorder(NodeVisitor& visitor);
private:
  void copy(const BinarySearchTree& other);
  void destroy();
  Node* _root;
  size_t _size;
};

std::ostream& operator << (std::ostream& stream, const BinarySearchTree& tree);
#endif
