#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

Student::Student() 
{
  
}

Student::~Student() 
{
  //yea
  delete &first;
  delete &last;
  delete &ID;
  delete &GPA;
}

char* Student::getFirst() 
{
  return first;
}

char* Student::getLast() 
{
  return last;
}

int Student::getID() 
{
  return ID;
}

void Student::setID(int inID) 
{
  ID = inID;
}

float Student::getGPA() 
{
  return GPA;
}

void Student::setGPA(float inGPA) 
{
  GPA = inGPA;
}
