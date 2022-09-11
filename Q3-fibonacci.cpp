#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;

long itfib(int);
int refib(int);
int count=0;

//0 1 1 2 3 5 8 13 21 34 55
//a.n = a.n-1 + a.n-2
int main()
{
	int n;
	cout<<"Enter the number 'n' for Fibonaaci(n>0)"<<endl;
	cin>>n;
	
	cout<<"Iterative"<<endl;
	auto start= high_resolution_clock::now();
	cout<<itfib(n)<<endl;
	auto stop= high_resolution_clock::now();
	
	auto duration=duration_cast<nanoseconds>(stop-start);
	cout<<"duration="<<duration.count()<<endl;
	
	cout<<"Recursive"<<endl;
	auto start1= high_resolution_clock::now();
	cout<<refib(n)<<endl;
	auto stop1= high_resolution_clock::now();
	
	auto duration1=duration_cast<microseconds>(stop1-start1);
	cout<<"duration="<<duration1.count()<<endl;
	
	cout<<"number of call to fib function="<<count;
	return 0;
}

long itfib(int n)
{ 
   long a,b,s;
   a=0;b=1;s=0;
   
   for(int i=2;i<=n;i++)
   {
     if(n==0)
          return 0;
     else if(n==1)
          return 1;
     else
     {
          s=a+b;
          a=b;
          b=s;
          
      }
   }
   
	return s;
}

int refib(int n)
{  
   count++;
   if(n>1)
      return(refib(n-1)+refib(n-2));
   else return n;	
}






