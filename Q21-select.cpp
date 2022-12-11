#include<iostream>
#include<time.h>

using namespace std;

int main()
{
	int n;
	cout<<"::SELECTION SORT::"<<endl;
	srand(time(NULL));
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	int a[n];
	
	cout<<"Generating random Numbers"<<endl;
	for(int i=0;i<n;i++)
	{
	a[i]=(rand()%(n));
	cout<<a[i]<<endl;
    }
	
	int max,temp;
	for(int i=n-1;i>0;i--)
	{
		max=i;
		for(int j=0;j<i;j++)
		if(a[j]>a[max])
		max=j;
		
		if(max!=i)
		{
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
	    }
	    
	}
	
	cout<<"Sorted array::"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
	
	return 0;
}
