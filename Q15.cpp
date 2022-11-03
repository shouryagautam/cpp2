#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
void sorting(int a[],int);
int Lsearch(int a[],int,int);
int Bsearch(int a[],int,int);

int main()
{  
    cout<<"::SEARCHING METHODS::"<<endl;
    int n,x,Lpos,Bpos;
    cout<<"Enter the number of elements you want to enter:: ";
    cin>>n;
    
    static int a[50];
    for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" th element"<<endl;
		cin>>a[i];
    }	
	cout<<endl;
	
	
	cout<<"Enter the element you want to find"<<endl;
	cin>>x;
	
	cout<<"::LINEAR SEARCH::"<<endl;
	
	auto start= high_resolution_clock::now();
	Lpos=Lsearch(a,x,n);
	auto stop= high_resolution_clock::now();
	
	auto duration=duration_cast<microseconds>(stop-start);
	cout<<"duration="<<duration.count()<<" ms"<<endl;
	
	
	
	
	if (Lpos)
	cout<<"Element "<<x<<" found at position::"<<Lpos<<endl;
	else cout<<"Element not found"<<endl;
	
	cout<<endl;
	cout<<"::BINARY SEARCH::"<<endl;
	sorting(a,n);
	
	auto start1= high_resolution_clock::now();
	Bpos=Bsearch(a,x,n);
	auto stop1= high_resolution_clock::now();
	
	
	auto duration1=duration_cast<microseconds>(stop1-start1);
	cout<<"duration="<<duration1.count()<<" ms"<<endl;
	
	
	if (Bpos)
	cout<<"Element "<<x<<" found at position::"<<Bpos<<endl;
	else cout<<"Element not found"<<endl;
	return 0;
}


void sorting(int a[],int n)
{   int temp;
	
	for(int i=0;i<n;i++)
	{
	   temp=a[i];
	   for(int j=i+1;j<n;j++)
	   {
	   	 if (temp>a[j])
	   	    {
			   a[i]=a[j];
	   	       a[j]=temp;
	   	       temp=a[i];
	   	    }
	   }
	}
	
	cout<<"Sorted Array for binary search::"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<"th element"<<endl;
		cout<<a[i]<<endl;
    }	
		
}


int Lsearch(int a[],int x,int n)
{
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
		return i+1;
    }	
	
	return 0;
}

int Bsearch(int a[],int x,int n)
{
	int l,mid,h;
	l=0;
	h=n-1;
	mid=0;
	
	while(h-l>=0)
	{
		
	mid=(l+h)/2;
	
	    if (a[mid]==x)
	        return mid+1;
	    if(a[mid]<x)
	       l=mid+1;
     	else
           h=mid-1;
    }  
	
	return 0;
}


	
	
	
