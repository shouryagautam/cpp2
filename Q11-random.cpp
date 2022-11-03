#include<iostream>
using namespace std;

int main()
{   cout<<"::RANDOM NUMBER::"<<endl;
    
	int Xo,a,b,m;
	cout<<"Enter the value of Xo"<<endl;
	cin>>Xo;
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	cout<<"Enter the value of m"<<endl;
	cin>>m;
	
	
	for(int n=0;n<100;n++)
	{
		Xo=(a*Xo+b)%m;
		cout<<Xo<<"  ";
	}
	
	
	return 0;
}