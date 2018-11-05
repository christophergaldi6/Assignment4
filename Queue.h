/*
Chris Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 4
*/

#ifndef QUEUE_H
#define QUEUE_H

#include "List.h"

template <class T>
class Queue
{
 private:
   int size;
   DoublyLinkedList<T> myQueue;

 public:
   Queue()
   {
     size = 0;
   };
   ~Queue()
   {
     size = 0;
   };

   void insert(T data)
   {
    myQueue.insertBack(data);
    ++size;
   };
   T remove()
   {
     if (getSize() <= 0)
     {
       cout << "unable to remove" << endl;
     }

     T temp = myQueue.front->data;
     myQueue.removeFront();
     --size;
     return temp;
   };
   T peek()
   {
     if (getSize() <= 0)
     {
       cout << "unable to peek" << endl;
     }
     return myQueue.front->data;
   };


   bool isEmpty()
   {
     return (size == 0);
   };

   int getSize()
   {
     return size;
  };
};



#endif
