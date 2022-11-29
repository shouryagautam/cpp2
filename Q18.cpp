#include<iostream>
using namespace std;
int main()
{   

    int n;
	cout<<"Enter the number of elements you want to enter:: ";
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" th element"<<endl;
		cin>>a[i];
    }	
	
	int temp;int count =0;
	for(int i=0,j=1;i<=count;i++ )
	{    
		for(;j<n;j++)
		{
            if (a[i]!=a[j])
            {
         	   a[i+1]=a[j];
         	   count++;
         	   break;
            }
        }
    }
	
	
	cout<<endl;
	for(int i=0;i<=count;i++)
	{
		cout<<i+1<<" th element"<<endl;
		cout<<a[i]<<endl;
    }	
	
	
	return 0;
}