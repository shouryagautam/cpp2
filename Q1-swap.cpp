#include<iostream>
using namespace std;
int main()
{   int a,b;
    cout<<"Enter the first number 'a'"<<endl;
	cin>>a;
	cout<<"Enter the first number 'b'"<<endl;
	cin>>b;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"Values after swapping "<<endl;
    cout<<"a="<<a<<endl<<"b="<<b;
    return 0;
    
}