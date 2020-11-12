  
#ifndef student_h
#define student_h

#include <iostream>
#include <cstring>

using namespace std;

class Student {
 public:
  Student();
  ~Student();
  char* getFirst();
  //void setFirst(char*);
  char* getLast();
  //void setLast(char*);
  int getID();
  void setID(int);
  float getGPA();
  void setGPA(float);
 private:
  char first[10];
  char last[10];
  int ID;
  float GPA;
};

#endif
