#include<iostream>
#include<string>
using namespace std;

int main()
{   


   int decimal,base,remainder;
   char a[20];
   int i=0;
   cout<<"::CHANGING THE BASE::"<<endl;
   cout<<"Enter the decimal number"<<endl;
   cin>>decimal;
   cout<<"Enter the base :"<<endl;
   cin>>base;
   
   while(decimal)
   {
   	
   	 remainder=decimal%base;
   	 
   	 if(remainder<10)
   	     a[i]=remainder+48;
   	 else 
		 a[i]=remainder+55;
   	 
   	 
   	 i++;
   	 decimal=decimal/base;
   	
   	}
   
   
   cout<<"The Number in base "<<base<<" :: "<<endl;
   while(i)
    {   
    	cout<<a[i-1];
    	--i;
	}
   

   return 0; 
}
    
    
    
    
    
    
    
    
    
    
    