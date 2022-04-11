#include<bits/stdc++.h>
using namespace std;

#include"LinkedList.cpp"

main()
{
    LinkedList L1;
    ComplexInteger obj1(2,1);
    cout<<"Adding a ComplexInteger object to a Linked List"<<endl;
    L1=L1+obj1;
    cout<<"Linked List L1:";
    printList(L1);
    cout<<endl;

    ComplexInteger obj2(3,1);
    cout<<"Linked List L1:";   
    cout<<"Adding a ComplexInteger object to a Linked List"<<endl;
    L1=L1+obj2;
    printList(L1);
    cout<<endl;

    LinkedList L2;
    cout<<"Appending a LinkedList to another Linked List"<<endl;
    L2=L2+L1;
    cout<<"Linked List L2:";
    printList(L2);
    cout<<endl;

    cout<<"Deleting ComplexInteger object at the end of the  Linked List"<<endl;
    L2=L2-2;//(int) is a dummy integer.
    cout<<"Linked List L2:";
    printList(L2);
    cout<<endl;

    L2=L2*2;
    cout<<"Deleting a ComplexInteger object based on a offset in a  Linked List"<<endl;
    cout<<"Linked List L2:";
    printList(L2);
    cout<<endl;

    cout<<"Assigning a Linked List to another Linked List"<<endl;
    L2=L1;
    cout<<"Linked List L2:";
    printList(L2);
    cout<<endl;

    ComplexInteger arr[2];
    int rvalue,ivalue;
    
    for(int i=0;i<2;i++)
    {
        cout<<"\n Enter the real and imaginary value of each element of the array"<<endl;
        cin>>rvalue>>ivalue;
        ComplexInteger object(rvalue,ivalue);
        arr[i]=object;
    }

    LinkedList L3;
    cout<<"Assining an array of ComplexInteger Object to a  Linked List"<<endl;
    L3=arr;
    cout<<"Linked List L3:";
    printList(L3);
    cout<<endl;


    cout<<"\n Enter the real and imaginary number of a new complexInteger object. To check its presence in Matrix 1"<<endl;
    int rvalue2,ivalue2;
    cin>>rvalue>>ivalue;
    ComplexInteger newobj(rvalue2,ivalue2);
    //display(newobj);

    cout<<"Seacrching a ComplexInteger object in a Linked List"<<endl;
    if(search(newobj,L3))
    {
        if(ivalue>=0)
            cout<<"newobj"<<rvalue2<<"+"<<ivalue2<<"i is present in Linked list L3"<<endl;
        else 
            cout<<"newobj"<<rvalue2<<ivalue2<<"i is present in Linked list L3"<<endl;
    }
    else
    {
        if(ivalue>=0)
            cout<<"newobj"<<rvalue2<<"+"<<ivalue2<<"i is present in Linked list L3"<<endl;
        else 
            cout<<"newobj"<<rvalue2<<ivalue2<<"i is present in Linked list L3"<<endl;
    }


}