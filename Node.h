//define
#ifndef NODE_H
#define NODE_H
//imports
#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

class Node { //class for nodes in the list
 public:
  Node(Student*); //constructor for node with pointer to student class
  ~Node(); //destructor
  //getters and setters
  void setStudent(Student* newstudent); //set the student
  Student* getStudent(); //return student pointer
  void setNext(Node* newnext); //set next node
  Node* getNext(); //returns next node
 private:
  Student* student; //student held in node
  Node* next; //next node in list
};

#endif
