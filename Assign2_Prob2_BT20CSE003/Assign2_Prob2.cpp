#include<bits/stdc++.h>

#include"Matrix.cpp"

using namespace std;

main()
{
    int num1,num2;
    cout<<"Enter the size of the square Matrix 1 and Matrix 2"<<endl;
    cin>>num1>>num2;

    Matrix M1(num1);
    Matrix M2(num2);


    read_matrix(M1);
    read_matrix(M2);
    cout<<"Matrix 1:"<<endl;
    displayMatrix(M1);
    cout<<endl;
    cout<<"Matrix 2:"<<endl;
    displayMatrix(M2);
    cout<<endl;
 
 
    int num3;
    cout<<"\n Enter the size of the matrix 3 "<<endl;
    cin>>num3;
    Matrix M3(num3);


    ComplexInteger lol(2,1);

    cout<<"Matrix 3:"<<endl;
    cout<<"Addition:";
    M3=(M1+M2);
    displayMatrix(M3);


    cout<<"Matrix 3:"<<endl;
    cout<<"Subtraction:";
    M3=M1-M2;
    displayMatrix(M3);

    cout<<"Matrix 3:"<<endl;
    cout<<"Multiplicatiom:";
    M3=M1*M2;
    displayMatrix(M3);

  

    int number;
    // cout<<"\n Enter the number to be deleted"<<endl;
    // cin>>number;
    // M1^number;
    // displayMatrix(M1);
    int num4;
    cout<<"Enter the size of matrix 4"<<endl;
    cin>>num4;
    Matrix M4(num4);
    M4=M1;
    cout<<"Matrix 4:"<<endl;
    cout<<"Assignment:";
    displayMatrix(M4);

    cout<<"\n Enter the real and imaginary number of a new complexInteger object. To check its presence in Matrix 1"<<endl;
    int rvalue,ivalue;
    cin>>rvalue>>ivalue;
    ComplexInteger newobj(rvalue,ivalue);
    //display(newobj);
    if(search(newobj,M1))
    {
        if(ivalue>=0)
            cout<<"newobj"<<rvalue<<"+"<<ivalue<<"i is present in Linked list L3"<<endl;
        else 
            cout<<"newobj"<<rvalue<<ivalue<<"i is present in Linked list L3"<<endl;
    }
    else
    {
        if(ivalue>=0)
            cout<<"newobj"<<rvalue<<"+"<<ivalue<<"i is present in Linked list L3"<<endl;
        else 
            cout<<"newobj"<<rvalue<<ivalue<<"i is present in Linked list L3"<<endl;
    }



    cout<<endl;

    

}