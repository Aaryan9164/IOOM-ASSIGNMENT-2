//BT20CSE003 AARYAN PATEL
//String.h

#include <bits/stdc++.h>
using namespace std;

class String
{
	private:
	char *value;
	int length;
    
	public:
	String ();
	String (char* s);
	String (const String &s);
	~String ();
	
	
	friend String operator + (const String &s, const String &t);
	friend int operator <= (const String &s, const String &t);
	friend int operator== (const String &s, const String &t);
	friend int operator != (const String &s, const String &t);
	char & operator[] (int i); //(Unary)
	
	friend void display(const String&);
	
};