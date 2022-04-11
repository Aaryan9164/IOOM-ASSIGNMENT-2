#include<bits/stdc++.h>
using namespace std;
#include"ComplexInteger.cpp"

int main()
{
	int r1,i1;
	cout<<"\n Enter the real and imaginary number for complex number 1"<<endl;
	cin>>r1>>i1;
	ComplexInteger c1(r1,i1);
	int r2,i2;
	cout<<"\n Enter the real and imaginary number for complex number 1"<<endl;
	cin>>r2>>i2;
	ComplexInteger c2(r2,i2);
	
	ComplexInteger c3=c1;
	display(c3);


	//operator+
	cout<<"Addition"<<endl;
	c3=c1+c2;
	display(c3);

	//operator-
	cout<<"Subtraction"<<endl;
	c3=c1-c2;
	display(c3);

	//operator*
	cout<<"Multiplication"<<endl;
	c3=c1*c2;
	display(c3);

	try
	{
		if(c2.get_real()==0 and c2.get_imag()==0)
		{
			throw "Can't do division as the denominator is 0!";
		}
		else
		{
			//operator/
			cout<<"Division"<<endl;
			c3=c1/c2;
			display(c3);
		}
	}
	catch(char*err)
	{
		cout<<"\n The exception created is:"<<err<<endl;
	}

	//operator=
	cout<<"Assignment"<<endl;
	c3=c2;
	display(c3);

	//operator^
	cout<<"Unary ^"<<endl;
	c3=c3^3;
	display(c3);

	//operator>
	cout<<"Unary >"<<endl;
	c3=c3>2;
	display(c3);
}