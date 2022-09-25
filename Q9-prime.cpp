#include<iostream>
using namespace std;

int main()
{
  int n,flag;
  
  cout<<"::PRIME FACTORS::"<<endl;
  cout<<"Enter the number: "<<endl;
  cin>>n;
  
  cout<<"Prime factors :: "<<endl;
  for(int i=2;i<=n;i++)
      if(n%i==0)
	   {   flag=0;
	
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