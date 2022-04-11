//LinkedList.h
//BT20CSE003 AARYAN PATEL

#include"../Assign2_Prob1_BT20CSE003/ComplexInteger.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
public:
    ComplexInteger data;
    Node* next;
  
    // Default constructor
    Node();
  
    // Parameterised Constructor
    Node(ComplexInteger data);
};
  


class LinkedList
{
    public:
        Node*head;

        LinkedList();
        LinkedList(ComplexInteger data);
        LinkedList(const LinkedList &L);
        ~LinkedList();

        friend void printList(const LinkedList &);
        friend bool search(ComplexInteger obj,const LinkedList &);
       

      

        LinkedList operator +(ComplexInteger d);
        LinkedList operator +(const LinkedList &L);
        LinkedList operator -(int);
        LinkedList operator *(int);
        LinkedList & operator =(const LinkedList &);
        LinkedList & operator =(ComplexInteger  array[]);
        


};

#endif