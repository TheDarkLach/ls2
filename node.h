#ifndef NODE_H
#define NODE_H
#include "Student.h" // This is node class
//#include "Node.h"
#include <cstdlib>
#include <iostream> // libraries
#include <cstring>

using namespace std; 

class Node{ // node class
 public:
  Node(Student* s); // initialzes functions, constructor, and destructors
  ~Node();
  Node* getNext();
  Student* getStudent();
 void setNext(Node* n);
 private:
  Student* student; //= new Student; // student and node variables
  Node* node;
  
  
};
#endif
