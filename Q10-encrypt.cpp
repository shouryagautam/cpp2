#include<iostream>
#include<iomanip>
#define swap(k,N) (N*100)+(k/100) 
 
using namespace std;

//0 1 2 3 4 5 6 7 8 9
//7 8 9 0 1 2 3 4 5 6
//+10...if x<7
//-7

int reverse(int);
int encrypt(int);
int decrypt(int);

int main()
{
	
	int n,encM,decM;
	cout<<"::ENCRYPT/DECRYPT::"<<endl;
	cout<<"Enter integer number(4-Digit)"<<endl;
	cin>>n;
	cout<<endl;
	
	encM=encrypt(n);
	cout<<"Encrypted Message :: "<<endl;
	cout<<setw(4)<<setfill('0')<<encM<<endl<<endl;
	
	decM=decrypt(encM);
	cout<<"Decrypted Message :: "<<endl;
	cout<<setw(4)<<setfill('0')<<decM<<endl<<endl;
	return 0;
}


int reverse(int num)
{  
  int rev,temp;
  rev=0;
  
  while(num)
  {
  	temp=num%10;
  	rev=rev*10+temp;
  	num=num/10;
  }
  
  return rev;	
}

int encrypt(int n)
{
    int N,k,rev,temp;

	while(n)
  {
  	temp=n%10;
  	temp=(temp+7)%10;
  	rev=rev*10+temp;
  	n=n/10;
  }
	
	k=reverse(rev);
	N=swap(k,k%100);	
	
	return N;
}

int decrypt(int m)
{   int t,r,dem;
	m=swap(m,m%100);
    r=0;
    
	while(m)
  {
  	  t=m%10;
  	  if(t/7==0)
  	      t=t+3;
  	  else 
  	      t=t-7;
  	  r=r*10+t;
  	  m=m/10;
  }
	
	dem=reverse(r);
	return dem;	
}