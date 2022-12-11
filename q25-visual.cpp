#include<iostream>
#include<stdlib.h>
#include<Windows.h>
#include<iomanip>
#include<time.h>

using namespace std;
void display(int a[],int);

int main()
{
	int n;
	
	cout<<"::Selection Sort Visualiser::"<<endl;
	srand(time(NULL));
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	int a[n];
	
	cout<<"Generating random numbers::"<<endl;
	for(int i=0;i<n;i++)
	a[i]=(rand()%(n));
	
	int max,temp;
	
	
	sleep(5);
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
		
		display(a,n);
		cout<<"Pass "<<i+1<<endl;
	}
	
	return 0;
}


void display(int a[],int n)
{   int last;
    sleep(0.5);
	system("cls");
	for(int i=0;i<n;i++)
	{
	    last=a[i];
	    cout<<"Data "<<setw(2)<<setfill(' ')<<i+1;
		for(int j=1;j<=last;j++)
		    cout<<"|";	
	    cout<<endl;	
	}
}