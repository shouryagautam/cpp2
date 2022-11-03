#include<iostream>
using namespace std;

int main()
{
  int n,flag,low,high;
  
  cout<<"::PRIME NUMBERS::"<<endl;
  
  cout<<"Enter the range between which prime numbers are to be generated::"<<endl;
  cin>>low>>high;
  for(int i=low;i<=high;i++)
   {
		flag=0;
	
           for(int j=2;j<i;j++)
			  if(i%j==0)
               { ++flag;
                  break;
			   }
            
           if (flag==0)
           cout<<i<<endl;
   }
    return 0;
}