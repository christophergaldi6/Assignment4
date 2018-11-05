/*
Chris Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 4
*/

#ifndef INPUT_H
#define INPUT_H
#include <iostream>
#include <fstream>

using namespace std;

class UserInput
{
private:
  int lines;

protected:
  string userInput;
  string fileName;
  void setString();
  ifstream myFile;

public:
  UserInput();
  UserInput(string fileName);
  ~UserInput();

  void addFile(string fileName);
  string getString();
  int getLines();

};



#endif
