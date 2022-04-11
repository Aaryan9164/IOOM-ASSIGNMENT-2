//BT20CSE003
//AARYAN PATEL
//Matrix.h

#include"../Assign2_Prob1_BT20CSE003/ComplexInteger.h"


#ifndef MATRIX_H
#define MATRIX_H


#define SIZE 100
class Matrix
{
    private:
        ComplexInteger v[SIZE][SIZE];
        int size;
        static int matrixcounter;

    public:
       
        Matrix(int n);//Parameterized Constructor
        Matrix(const Matrix &m);//Copy Constructor
        ~Matrix();//Destructor

        ComplexInteger get_value_in_matrix(int i,int j) const ;//Getter method
        void set_value_in_matrix(int i,int j,ComplexInteger value);//Setter method
        friend void read_matrix(Matrix &M);

        friend void displayMatrix(const Matrix &M);//friend function
        friend bool search(ComplexInteger obj,const Matrix &M);//friend funtion

        Matrix operator +(const Matrix &);
        Matrix operator +(const ComplexInteger C);
        Matrix operator -(const ComplexInteger C);
        Matrix operator -(const Matrix &);
        Matrix  operator ^(int index);
        Matrix & operator =(const Matrix &M);
        Matrix operator *(const ComplexInteger C);
        Matrix operator *(const Matrix &);
       

};
int Matrix::matrixcounter=1;

#endif