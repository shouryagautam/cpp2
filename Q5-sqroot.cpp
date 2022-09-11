#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	int i;
	float n,x1,x2,x;
	
	cout<<"Enter the number(n>0) for Square Root:"<<endl;
	cin>>n;
	
	for(i=1;;i++)	
	{
		if((i*i)>=n)
        {	
            cout<<"Nearest perfect square :";
        	cout<<i<<endl;
        	break;
        }
	}
	
	x1=i-1;
	x2=i;
	x=(x1+x2)/2;
	
	do
   {
    	if((x*x)>n)
	         x2=x;
	    else
             x1=x;
        x=(x1+x2)/2;
    } while (fabs(x1-x2)>0.00001);
	
	
	cout<<"The square root of "<<n<<" = "<<x;
	return 0;
}