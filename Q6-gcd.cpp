#include<iostream>
using namespace std;

int main()
{   
    int n,m,small,big,rem;
    cout<<"::CALCULATE GCD::"<<endl;
    cout<<"Enter the first number: "<<endl;
	cin>>n;
	cout<<"Enter the second number: "<<endl;
	cin>>m;
	
	if(n>m)
	{
	    big=n;
	    small=m;
    }
	else
	{
	    big=m;
	    small=n;
    }
    
    do{
    	
        rem=big%small;
	    if(rem==0)	
	    break;
	
	    small=rem;
	    big=small;
	
    }while(1);
	
	
	cout<<"The GCD :: "<<small;
	
	
}