#include<iostream>
using namespace std;

int main()
{  
  int num,rev,temp;
  rev=0;
  cout<<"::REVERSE THE NUMBER::"<<endl;
  cout<<"Enter the number: "<<endl;
  cin>>num;
  
  
  while(num)
  {
  	temp=num%10;
  	rev=rev*10+temp;
  	num=num/10;
  }
  
  cout<<"Reversed number :: "<<endl<<rev;
  	
  return 0;	
}