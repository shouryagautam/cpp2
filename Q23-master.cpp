#include<iostream>
#include<math.h>
#include<time.h>

using namespace std;
int hit(int code[],int guess[]);
int sink(int code[],int guess[]);
int shot(int code[],int guess[]);

int main()
{    
    cout<<"::ARE YOU A MASTERMIND?::"<<endl;
    
    int Gint,code[4],guess[4],attempt;
    srand(time(NULL));
    cout<<"::Generating Code::"<<endl;
	for(int i=0;i<4;i++)
	{
	
	code[i]=(rand()%10);
	//cout<<code[i];
    }
    
    cout<<endl;
	attempt=0;
	while(1){
	
	    cout<<"Attempt "<<++attempt<<endl;
	    cout<<"Enter the guess digits::"<<endl;
	    cin>>Gint;
	    
	    
	    for(int i=3;i>=0;i--)
	    {
	    	guess[i]=Gint%10;
	    	Gint/=10;
	    	//cout<<guess[i];	
		}
	
	    
	    if(shot(code,guess)==1)
	       {
		    cout<<"|||| YOU ARE A MASTERMIND ||||";
		    break;
	       }
	    else
	       {
		    cout<<"Sink : "<<sink(code,guess)<<endl;
		    cout<<"Hits : "<<hit(code,guess)<<endl;
	       }
	    cout<<endl;
    }
	
	return 0;
}

int shot(int code[],int guess[])
{
	int shot=0;
	
	for(int i=0;i<4;i++)
	{
		if(code[i]==guess[i])
		shot++;
	}
	
	if(shot==4)
	return 1;
	else return 0;
	
}

int sink(int code[],int guess[])
{
	int sink=0;
	
	for(int i=0;i<4;i++)
	if(code[i]==guess[i])
	sink++;
	
	return sink;
}

int hit(int code[],int guess[])
{
	int hit=0;
	
	for(int i=0;i<4;i++)
	    for(int j=0;j<4;j++)
	        {
	        	if(i!=j)
	        	   if(code[i]==guess[j])
	        	      hit++;
			}
	
    return hit;
}











