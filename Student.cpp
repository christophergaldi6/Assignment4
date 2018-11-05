/*
Chris Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 4
*/

#include "Student.h"

Student::Student()
{
  waitTime = 0;
  timeLeft = 0;
  arrivalTime = 0;
}

Student::Student(int at, int timeNeeded)
{
  Student();
  arrivalTime = at;
  timeLeft = timeNeeded;
}

Student::~Student()
{

}

bool Student::operator==(const Student &s1)
{
  if(s1.waitTime == 1)
  {

  }
  return false;
}

bool Student::operator!=(const Student &s1)
{
  if(s1.waitTime == 1)
  {
    
  }
  return true;
}
