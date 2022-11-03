#include<iostream>
int pown(long,long);
using namespace std;

int main()
{   cout<<"::POWER::"<<endl;
    long n,x;
    cout<<"Enter the value of base"<<endl;
	cin>>x;
	cout<<"Enter the value of Exponent"<<endl;
	cin>>n;
	
	cout<<"The value of x^n :: "<<pown(x,n);
	return 0;
}

int pown(long x,long n)
{
	if(n>0)
	return pown(x,n-1)*x;
	
	else
	return 1;
}