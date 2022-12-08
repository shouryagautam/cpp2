#include<iostream>
#include<stdlib.h>
#include<Windows.h>
#include<graphics.h>

using namespace std;
void display(int a[],int);

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++)
	a[i]=(rand()%(n));
	
	int max,temp;
	
	
	sleep(5);
	for(int i=n-1;i>0;i--)
	{
		max=i;
		for(int j=0;j<i-1;j++)
		if(a[j]>a[max])
		max=j;
		
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
		
		
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
	    cout<<"Data "<<i+1;
		for(int j=1;j<=last;j++)
		    cout<<"|";	
	    cout<<endl;	
	}
}