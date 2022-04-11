#include<bits/stdc++.h>
#include"Matrix.h"
#include"../Assign2_Prob1_BT20CSE003/ComplexInteger.cpp"

using namespace std;

//Assuming the matrix is a square matrix


Matrix::Matrix(int n)
{
    //cout<<"\n Matrix Parameterized constructor called"<<endl;
    size=n;
    ComplexInteger temp;

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
                v[i][j]=temp;
            
        }
    }
}



Matrix::Matrix(const Matrix &m)
{
    //cout<<"\n Matrix Copy Constructor called"<<endl;
    size=m.size;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
                v[i][j]=m.v[i][j];
            
        }
    }

}

Matrix::~Matrix()
{
    //cout<<"\n Matrix destructor called"<<endl;
}

ComplexInteger Matrix::get_value_in_matrix(int i,int j) const
{
    return v[i][j];
}

void Matrix::set_value_in_matrix(int i,int j,ComplexInteger value)
{
    v[i][j]=value;
}

void read_matrix(Matrix &M)
{
    // int num;
    // cout<<"Enter the size of the matrix (same as original matrix)"<<endl;
    // cin>>num;

    // Matrix mat(num);
    int r,im;

    for(int i=0;i<M.size;i++)
    {
        for(int j=0;j<M.size;j++)
        {
            cout<<"Enter the real and imaginary value of each element of the matrix "<<M.matrixcounter<<endl;
            cin>>r>>im;
            ComplexInteger object(r,im);

            M.v[i][j]=object;
        }
    }
    M.matrixcounter++;
    cout<<"Matrix has been filled"<<endl;
    cout<<endl;
    
}

void displayMatrix(const Matrix &M)
{
    int i=0,j=0;
    for(i=0;i<M.size;i++)
    {
        for(j=0;j<M.size;j++)
        {
            if(M.v[i][j].get_imag()>=0)
            {
                cout<<M.v[i][j].get_real()<<"+"<<M.v[i][j].get_imag()<<"i";
                cout<<" ";
            }
            else
            {
                cout<<M.v[i][j].get_real()<<M.v[i][j].get_imag()<<"i";
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}


bool search(ComplexInteger obj,const Matrix &M)
{
    for(int i=0;i<M.size;i++)
    {
        for(int j=0;j<M.size;j++)
        {
            if(M.v[i][j].get_real()==obj.get_real() and M.v[i][j].get_imag()==obj.get_imag())
            {
                return true;
            }
        }
    }
    return false;
}

Matrix Matrix::operator +(const Matrix &M)
{
    Matrix mat(M.size);
    int i=0,j=0;
    for(i=0;i<M.size;i++)
    {
        for(j=0;j<M.size;j++)
        {
            mat.v[i][j]=v[i][j]+M.v[i][j];
             //mat.set_value_in_matrix(i,j,(v[i][j]+M.get_value_in_matrix(i,j)));
            
        }
    }
    //displayMatrix(mat);
    return mat;

}

Matrix Matrix::operator +(const ComplexInteger C)
{
    Matrix mat(size);
    int i=0,j=0;
   
    for(i=0;i<mat.size;i++)
    {
        for(j=0;j<mat.size;j++)
        {
            mat.v[i][j]=v[i][j]+C;
            //mat.set_value_in_matrix(i,j,(v[i][j]+C));
        }
    }
    //displayMatrix(mat);
    return mat;

}



Matrix Matrix::operator -(const ComplexInteger C)
{
    
    Matrix mat(size);
    int i=0,j=0;
   
    for(i=0;i<mat.size;i++)
    {
        for(j=0;j<mat.size;j++)
        {
            mat.v[i][j]=v[i][j]-C;
        }
    }
    //displayMatrix(mat);
    return mat;

}


Matrix Matrix::operator -(const Matrix &M)
{
    Matrix mat(M.size);
    int i=0,j=0;
    for(i=0;i<mat.size;i++)
    {
        for(j=0;j<mat.size;j++)
        {
            mat.v[i][j]=v[i][j]-M.v[i][j];
        }
    }
    //displayMatrix(mat);
    return mat;
}


// Matrix  Matrix::operator ^(int index)
// {
//     Matrix mat(size);
    
//     ComplexInteger object;
//     int count=0;
//     for(int i=0;i<mat.size;i++)
//     {
//         for(int j=0;j<mat.size;j++)
//         {
//             if(count==index-1)
//             {
//                 mat.v[i][j].set(0,0);
//                 break;
//             }
//             count++;
//         }
//     }
//    //displayMatrix(mat);
//     return mat;
// }


Matrix & Matrix::operator =(const Matrix &M)
{
    if(this!=&M)
    {
    Matrix mat(M.size);

        for(int i=0;i<mat.size;i++)
        {
            for(int j=0;j<mat.size;j++)
            {
                
                //mat.set_value_in_matrix(i,j,M.v[i][j]);
                v[i][j]=M.v[i][j];
            }
        }
        //displayMatrix(mat);
  
    }
    return *this;
}




Matrix Matrix::operator *(const ComplexInteger C)
{
    Matrix mat(size);
    for(int i=0;i<mat.size;i++)
    {
        for(int j=0;j<mat.size;j++)
        {
            mat.v[i][j]=v[i][j]*C;
        }
    }
    //displayMatrix(mat);
    return mat;


}

Matrix Matrix::operator *(const Matrix &M)
{
   
    Matrix mat(M.size);

    if(size!=M.size)
    {
        cout<<"SORRY!Cannot perform matrix multiplication as sizes of two matrices are different"<<endl;
        return mat;
    }
    else
    {
        for(int i=0;i<mat.size;i++)
        {
            for(int j=0;j<mat.size;j++)
            {
                for(int k=0;k<mat.size;k++)
                {
                    mat.v[i][j]=mat.v[i][j]+(v[i][k]*M.v[k][j]);
                }
            }
        }
    }
    //displayMatrix(mat);
    return mat;
}

