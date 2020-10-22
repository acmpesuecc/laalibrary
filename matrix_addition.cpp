#include <iostream>
using namespace std;

class matrix
{
public:
float **a;
int r,c;
matrix()
{
	r=0;c=0;
	a = NULL;
}
matrix(int rr,int cc)
{
	r = rr; c = cc;
	a = new float*[r+1];
	for(int i=0;i<r;i++)a[i] = new float[c+1];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)a[i][j] =0;

	}

}


void get()
{

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)cin>>a[i][j];
	}
}

void add(matrix&b)
{
	if(b.r!=r || b.c!=c)cout<<"addition is not possible\n";
	else
	{
		cout<<"addition\n";
		for (int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)cout<<a[i][j] + b.a[i][j]<<" ";
			cout<<"\n";
		}
	}
}
};
