#include<iostream>
#include<math.h>
using namespace std;

int main()
{   
    int coins[]={1,5,10,20,50,100};
    
    cout<<"::MINIMUM COINS ::"<<endl;
    float amount;
    cout<<"Enter the amount::"<<endl;
    cin>>amount;
     
    
	amount*=100;
	int amt=amount;
	int change,count,total=0;
	
    for(int i=5;amt>0;i--)
	{
		change=coins[i];
		count=0;
		
		count=amt/change;
		amt=amt%change;
		
		total+=count;
		cout<<"Coins of "<<change<<" cents ::"<<count<<endl;		
    }
    
    cout<<"Minimum number of coins required ::"<<total<<endl;
    
	return 0;
}