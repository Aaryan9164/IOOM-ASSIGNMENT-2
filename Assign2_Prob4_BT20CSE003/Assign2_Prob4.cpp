#include<bits/stdc++.h>
using namespace std;

#include"LinkedList.cpp"

main()
{
    LinkedList L1;
    ComplexInteger obj1(2,1);
    L1=L1+obj1;
    cout<<"Linked List L1:";
    printList(L1);
    cout<<endl;

    ComplexInteger obj2(3,1);
    cout<<"Linked List L1:";   
    L1=L1+obj2;
    printList(L1);
    cout<<endl;

    LinkedList L2;
    L2=L2+L1;
    cout<<"Linked List L2:";
    printList(L2);
    cout<<endl;

    L2=L2-2;
    cout<<"Linked List L2:";
    printList(L2);
    cout<<endl;

    L2=L2*2;
    cout<<"Linked List L2:";
    printList(L2);
    cout<<endl;

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
    L3=arr;
    cout<<"Linked List L3:";
    printList(L3);
    cout<<endl;


    cout<<"\n Enter the real and imaginary number of a new complexInteger object. To check its presence in Matrix 1"<<endl;
    int rvalue2,ivalue2;
    cin>>rvalue>>ivalue;
    ComplexInteger newobj(rvalue2,ivalue2);
    //display(newobj);

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