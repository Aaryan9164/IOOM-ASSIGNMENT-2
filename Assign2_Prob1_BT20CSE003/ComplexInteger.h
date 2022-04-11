//BT20CSE003 Aaryan Patel
//ComplexInteger.h

#ifndef COMPLEXINTEGER_H
#define COMPLEXINTEGER_H

class ComplexInteger
{
    private:
    	int real;
		int imag;
    public:
    	ComplexInteger(int r=0,int i=0);
		ComplexInteger(const ComplexInteger &ci);
		~ComplexInteger();
		
		ComplexInteger operator + (const ComplexInteger &);
		ComplexInteger operator - (const ComplexInteger &);
		ComplexInteger operator * (const ComplexInteger &);
		ComplexInteger operator / (const ComplexInteger &);
		ComplexInteger operator > (int);//check friend
		ComplexInteger operator ^ (int);
		ComplexInteger & operator = (int);
		
	
		
    	friend void display(ComplexInteger &coI);
        void set(int ,int );
        int get_imag() const;
        int get_real() const;
};

#endif