//String.cpp

#include<iostream>
using namespace std;
#include"String.h"
String::String () 
	{
		length=0; 
		value=0;
		//	cout<<"String constructor"<<endl;
	}
	
String::String (char* s)
	{
		length=strlen(s);
		value =  new char [length];
		strcpy(value,s);
		//	cout<<"String parameterised constructor"<<endl;
	}
	
String::String (const String &s)
	{
		this->length=s.length;
		strcpy(this->value,s.value);
		//	cout<<"String copy constructor"<<endl;
	}
	
String::~String () 
	{
		delete[] value;
		//	cout<<"String destructor"<<endl;
	}
	

void display(const String& st)
{
	if(st.value!=0)
	{
		cout<<"length="<<st.length<<" string value="<<st.value<<endl;
	}
	else
	{
		cout<<"empty"<<endl;
	}
}

String operator + (const String &s, const String &t)
{
	char* tem=new char[s.length];
	strcpy(tem,s.value);
	String temp(strcat(tem,t.value));
	delete[] tem;
	return temp;
}

int operator <= (const String &s, const String &t)
{
 	if(strcmp(s.value,t.value)<0)
 	{
 		return 1;
	}
	else
	{
		return 0;
	}
}
 
int operator == (const String &s, const String &t)
{
 	if(strcmp(s.value,t.value)==0)
 	{
 		return 1;
	}
	else
	{
		return 0;
	}
}
 
int operator != (const String &s, const String &t)
{
 	if(strcmp(s.value,t.value)!=0)
 	{
 		return 1;
	}
	else
	{
	 	return 0;
	}
}

char String::operator[](int i)
{
	return value[i];
}