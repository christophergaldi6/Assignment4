/*
Chris Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 4
*/

#include "Simulation.h"
#include "List.h"

int main(int argc, char const *argv[])
{
  if (argc == 2)
  {
    Simulation s(argv[1]);
  }
  else
  {
    cout << "PLease type a filename as a command" << endl;
  }


  return 0;
}
