#include<iostream>

using namespace std;
int main()
{
	cout<<":: ::"<<endl;
    int n,max,imax,imin;
    cout<<"Enter the number of elements you want to enter:: ";
    cin>>n;
    max=imin=imax=0;
    
    int a[n];
    int min;
    
    for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" th element"<<endl;
		cin>>a[i];
		min=a[0];
		if(a[i]>max)
		{
		   max=a[i];
		   imax=i;
	    }
		else if (a[i]<min)
		{
		   min=a[i];
		   imin=i;
		}
    }	
    
    cout<<max<<endl;
	cout<<min;
	
	return 0;
}