#include<iostream>
using namespace std;
#include"ComplexInteger.h"

ComplexInteger::ComplexInteger(int r,int i)
{
    real=r;
    imag=i;
//	cout<<"ComplexInteger constructor"<<endl;
}
		
ComplexInteger::ComplexInteger(const ComplexInteger &ci)
{
	imag=ci.imag;
	real=ci.real;
//	cout<<"ComplexInteger copy constructor"<<endl;
}
ComplexInteger::~ComplexInteger()
{
//	cout<<"ComplexInteger destructor"<<endl;
}

void display(ComplexInteger &coI)
{
	if(coI.get_imag()>=0)
	{
		cout<<coI.real<<"+"<<coI.imag<<"i"<<endl;
	}
	else
	{
		cout<<coI.real<<coI.imag<<"i"<<endl;
	}
	
}

void ComplexInteger::set(int i,int r)
{
	real=r;
	imag=i;
}

ComplexInteger ComplexInteger::operator +(const ComplexInteger & obj)
{
	ComplexInteger res;
	res.imag=imag + obj.imag;
    res.real=real + obj.real;
    return res;	
}

ComplexInteger ComplexInteger::operator -( const ComplexInteger  & obj)
{
	ComplexInteger res;
	res.imag=imag - obj.imag;
    res.real=real - obj.real;
    return res;	
}

ComplexInteger ComplexInteger::operator *(const ComplexInteger  & obj)
{
	ComplexInteger res;
	res.real=(real* obj.real)-(imag*obj.imag);
	res.imag=(imag* obj.real)+(real*obj.imag);
    
    return res;	
}

ComplexInteger ComplexInteger::operator /(const ComplexInteger  & obj)
{
	ComplexInteger res;
	res.real=((real* obj.real)+(imag*obj.imag))/(obj.real*obj.real+obj.imag*obj.imag);
	res.imag=((imag* obj.real)-(real*obj.imag))/(obj.real*obj.real+obj.imag*obj.imag);
    
    return res;	
}

ComplexInteger ComplexInteger::operator >(int)
{
	ComplexInteger res;
	res.real=imag;
	res.imag=real;
    
    return res;	
}

ComplexInteger ComplexInteger::operator ^(int)
{
	ComplexInteger res;
	res.real=(real*real)-(imag*imag);
	res.imag=0;
    
    return res;	
}

ComplexInteger & ComplexInteger::operator =(int)		//check assignment operator
{
	
	ComplexInteger res;
	res.real=real;
	res.imag=imag;
    
    return *this;	
}

int ComplexInteger::get_imag() const
{
	return imag;
}

int ComplexInteger::get_real() const
{
	return real;
}