#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of iterations:"<<endl;
	cin>>n;
	
	long double x,t,s,fac;
	cout<<"Enter the angle (in deg):"<<endl;
	cin>>x;
	
	x*=(3.142/180.0);
	t=x;
	s=x;
	
	for(int i=1;i<=n;i++)
	{
      fac=((2*i)*((2*i)+1));
	  t=-1*t*x*x/fac;
	  s=s+t;
    }
    
    cout<<"sin("<<x<<")="<<s;
	return 0;
}