#include<bits/stdc++.h>
using namespace std;

#include"../Assign2_Prob1_BT20CSE003/ComplexInteger.cpp"
#include"LinkedList.h"

Node::Node()
{
    data.set(0,0);
    next=NULL;
}

Node::Node(ComplexInteger data)
{
    this->data = data;
    this->next = NULL;
}


LinkedList::LinkedList()
{
    head=NULL;
}

LinkedList::LinkedList(const LinkedList &L)
{
    head=L.head;
    Node*ptr1=head;
    Node*ptr2=L.head;
    while(ptr2!=NULL)
    {
        ptr1->data=ptr2->data;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
}

LinkedList::~LinkedList()
{
    //cout<<"Linked List destructor called"<<endl;
}



// Function to insert a new node.
LinkedList LinkedList::operator +(ComplexInteger d)
{
    // Create the new Node.
    LinkedList L1;
    L1.head=head;
    Node* newNode = new Node(d);
  
    
  
    // Assign to head
    if (head == NULL) 
    {
        L1.head=head=newNode;
        return L1;
    }
  
    // Traverse till end of list
    Node* temp =L1.head;
    while (temp->next != NULL) 
    {
  
        // Update temp
        temp = temp->next;
    }
  
    // Insert at the last.
    temp->next = newNode;

    return L1;
}

LinkedList LinkedList::operator +(const LinkedList &L)
{
    LinkedList L1;
  

    Node*temp=head;
    L1.head=head;
    if(head==NULL)
    {
        L1.head=head=L.head;
      
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=L.head;
        
    }
    return L1;
   
}


LinkedList LinkedList::operator -(int num)
{
    LinkedList L1;

    Node *temp1 = head, *temp2 = NULL;
    L1.head=head;
    Node*temper=L1.head;
  
    if (head == NULL) 
    {
        cout << "List is empty." << endl;
        return L1;
       
    }
  
    
    while (temper->next!= NULL) 
    {
        temp2=temper;
        temper = temper->next;
    }
    temp2->next=NULL;
    delete temper;
    temper=NULL;
  
    return L1;

}

LinkedList LinkedList::operator *(int num)
{
    LinkedList L1;
    L1.head=head;

    Node*temp=head;
 
    Node*temp2=NULL;
    

    int ListLen=0;
 

  
    if (head == NULL) 
    {
        cout << "List is empty." << endl;
        return L1;
    }
  
    // Find length of the linked-list.
    while (temp != NULL) 
    {
        temp = temp->next;
        ListLen++;
    }
  
    // Check if the position to be
    // deleted is less than the length
    // of the linked list.
    if (ListLen<num) 
    {
        cout<<"Index out of range"<< endl;
        return L1;
    }
  
    // Declare temp1
    temp = head;
    Node*temp3=head=L1.head;
  
    // Deleting the head.
    if (num == 1) 
    {
  
        // Update head
        temp3= temp3->next;
        delete temp;
        temp=NULL;
        head=L1.head=NULL;
        return L1;
    }
  
    // Traverse the list to
    // find the node to be deleted.

    temp=head;
    while (num-- > 1) 
    {
  
        // Update temp2
        temp2 =temp;
  
        // Update temp1
        temp = temp->next;
    }
  
    // Change the next pointer
    // of the previous node.
    temp2->next=temp->next;
  
    // Delete the node
    delete temp2;

    return L1;


}

LinkedList & LinkedList::operator =(const LinkedList &L)
{
    if(this!=&L)
    {
        LinkedList L1;
        Node*temp=L.head;
        Node*temporary;
    
        Node*lastptr=new Node(L.head->data);
        L1.head=lastptr;
        while(temp!=NULL)
        {
            temporary=new Node(temp->data);
            lastptr->next=temporary;
            lastptr=lastptr->next;
            temp=temp->next;
        }
    }

    return *this;
}

LinkedList & LinkedList::operator =(ComplexInteger  array[2])
{
   
  
    Node*lastptr=new Node(array[0]);
    head=lastptr;
    Node*temporary;
    for(int i=1;i<2;i++)
    {
        temporary=new Node(array[i]);
        lastptr->next=temporary;
        lastptr=lastptr->next;
    }


    return *this;
    
}

bool search(ComplexInteger obj,const LinkedList &L)
{
    Node*temp=L.head;
    while(temp!=NULL)
    {
        if(temp->data.get_real()==obj.get_real() and temp->data.get_imag()==obj.get_imag())
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}


void printList(const LinkedList &L)
{
    Node* temp = L.head;
  
    // Check for empty list.
    if (L.head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
  
    // Traverse the list.
    while (temp != NULL)
    {
        if(temp->data.get_imag())
        {
             cout<<temp->data.get_real()<<"+"<<temp->data.get_imag()<<"i";
             if(temp->next!=NULL)
             {
                cout<<"->";
             }
             else
             {
                 cout<<"->NULL";
             }
             
        }
        else
        {
            cout<<temp->data.get_real()<<temp->data.get_imag()<<"i";
            if(temp->next!=NULL)
             {
                cout<<"->";
             }
             else
             {
                 cout<<"->NULL";
             }
        }
        temp = temp->next;
    }
}