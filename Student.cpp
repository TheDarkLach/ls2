#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

Student::Student() {
  
}

Student::~Student() {
  delete &first;
  delete &last;
  delete &ID;
  delete &GPA;
}

char* Student::getFirst() {
  return first;
}

char* Student::getLast() {
  return last;
}

/*void Student::setLast(char* inLast) {
  last = inLast;
  }*/

int Student::getID() {
  return ID;
}

void Student::setID(int inID) {
  ID = inID;
}

float Student::getGPA() {
  return GPA;
}

void Student::setGPA(float inGPA) {
  GPA = inGPA;
}
