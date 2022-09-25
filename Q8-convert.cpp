#include<iostream>
#include<string>
using namespace std;

int reverse (int);

int main()
{   
   int dec,t;
   int a[20];
   int i=0;
   cin>>dec;
   
   while(dec)
   { 
     if(dec>1) 
   	     t=dec%2;
   	 else t=1;
   	 a[i]=t;
   	 ++i;
   	 dec=dec/2;
    }
    
    cout<<"binary"<<endl;
    int k=i;
    cout<<"i"<<i<<endl;
    while(i)
    {   
    	cout<<a[i-1];
    	--i;
	}
    
    cout<<"K"<<k<<endl;
    if(k%3==1)
   {
       a[k]=0;
       a[k+1]=0;
   } 
    else if(k%3==2)
           a[k]=0;
    
    
    int x,oct,octal;
    for(int j=0;j<=k;j=j+3)
    {
    	x=(a[j+2]*4)+(a[j+1]*2)+(a[j]*1);
    	cout<<"x "<<x<<endl;
		cout<<"j "<<j<<endl; 
    	oct=oct*10+x;
	}
	
	octal=reverse(oct);
	
	cout<<"octal"<<endl;
	cout<<octal<<endl;
   	//hexa
   	if(k%4==1)
   {
       a[k]=0;
       a[k+1]=0;
       a[k+2]=0;
   } 
    else if(k%4==2)
    {   a[k]=0;
        a[k+1]=0;
    }
    else if(k%4==3)
           a[k]=0;
    
    int z;
    char hexa[20];
    int p=0;
    
    for(int j=0;j<=k;j=j+4,p++)
    {
    	z=(a[j+3]*8)+(a[j+2]*4)+(a[j+1]*2)+(a[j]*1);
    	if (z>9)
    	   hexa[p]='A'+(z%10);
    	else
    	hexa[p]=z;
	}
	
	cout<<"hexa"<<endl;
	while(p)
    {   
    	cout<<p<<" p "<<hexa[p-1]<<endl;
    	--p;
	}
   	
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
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
