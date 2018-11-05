/*
Chris Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 4
*/

#ifndef LISTNODE_H
#define LISTNODE_H

using namespace std;

template <class T>
class ListNode
{
public:
  ListNode *next;
  ListNode *prev;
  T data;

  ListNode()
  {
    next = NULL;
    prev = NULL;
  };
  ListNode(T d)
  {
    ListNode();
    data = d;
  };
  ~ListNode()
  {

  };



};



#endif
