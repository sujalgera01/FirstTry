/*There are numerous applications of matrices, both in mathematics and other sciences. Some of them merely take advantage of the compact representation of a set of numbers in a matrix. Few to mention the application of matrices are game theory, economics, graph theory, quantum theory, probabilty theory and statistics. Each type of application use different type of data. Design a generic class matrix with functions to check if a matrix is sparse and add two matrices. A matrix is said to be sparse, if the number of zero’s in the matrix is larger than the number of non-zero elements. Define a user defined exception mismatchDimension and throw it when the dimension of matrix1 is not equal to dimension of matrix 2. Print “Dimension of matrices do not match” when the exception is caught.*/



#include<iostream>
#include <exception>
using namespace std;

class mismatchDimension:public exception
{
	public:
	void error_Msg()const;
};
template<class T>
class matrix
{
	int row;
	int col;
	T ele[10][10];
	public:
	void get();
	bool check_Sparse();
	matrix add(matrix&);
	void print();
};

void mismatchDimension::error_Msg()const{
    cout<<"Dimension of matrices do not match"<<endl;
}
template<class T> 
void matrix<T>::get()
{
    int m,n;
    cin>>row>>col;
    for(m=0;m<row;m++)
    {
        for(n=0;n<col;n++)
        {
            cin>>ele[m][n];
        }
    }
}

template<class T>
bool matrix <T>::check_Sparse()
{
    int m=0,n,c=0;
    int t=row*col;
    for(;m<row;m++)
    {
        for(n=0;n<col;n++)
        {
            if(ele[m][n]==0)
            c++;
        }
    }
    if(c>t/2)
    return true;
    else
    return false;
}

template<class T> 
matrix<T> matrix<T>::add(matrix<T> &a)
{
    int m,n;
    if(row!=a.row || col!=a.col)
    throw mismatchDimension();
    else
    for(m=0;m<row;m++)
    {
        for(n=0;n<col;n++)
        {
            a.ele[m][n]+=ele[m][n];
        }
    }
    return a;
}

template<class T> 
void matrix<T>::print()
{
    int m=0,n;
    for(;m<row;m++)
    {
        for(n=0;n<col;n++)
        {
            cout<<ele[m][n]<<endl;
        }
    }
}

int main()
{
	matrix<int> m1,m2,m3;
	m1.get();
	m2.get();
	try	
	{
	m3 = m1.add(m2);
	m3.print();	
	}catch(mismatchDimension &m)
	{
	m.error_Msg();
	}
	if(m1.check_Sparse())
	cout<<"Matrix is sparse"<<endl;
	else
	cout<<"Matrix is not sparse"<<endl;
	
}