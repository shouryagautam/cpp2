#include<iostream>
using namespace std;

int itfact(int);
int refact(int);

int main()
{
	int n,factit,factre;
	cout<<"Enter the number for factorial (n>=0) :"<<endl;
	cin>>n;
	
	cout<<"Factorial Iteratively:"<<endl;
	factit=itfact(n);
	cout<<factit<<endl;
	
    cout<<"Factorial Recursively:"<<endl;
	factre=refact(n);
	cout<<factre;
	
	return 0;
}

int itfact(int n)
{ 
   int s=1;
   for(;n>0;n--)
   s=s*n;
   
   return s;
	
}

int refact(int n)
{    
    int s=1;
    if(n>1)
	s=n*refact(n-1);
	
    else return s;	
}


















