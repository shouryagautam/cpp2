#include<iostream>
using namespace std;


int main()
{   
    int r1,c1,r2,c2,pass;
    
    
    cout<<"Enter the dimensions of first matrix(r*c)"<<endl;
    cin>>r1>>c1;
    int a[r1][c1];
    
    cout<<"Enter the First matrix"<<endl;
     for(int i=0;i<r1;i++)
			   {
			      for(int j=0;j<c1;j++)
			        {
					  cin>>a[i][j];
					  
				   } 
			      cout<<endl;   
		       }
    
    
    cout<<"Enter the dimensions of second matrix(r*c)"<<endl;
    cin>>r2>>c2;
    int b[r2][c2];
    
    cout<<"Enter the second matrix"<<endl;
     for(int i=0;i<r2;i++)
			   {
			      for(int j=0;j<c2;j++)
			        {
					   cin>>b[i][j];
					   
				    }
			      cout<<endl;   
		       }
	
	cout<<"Matrix Operations"<<endl;
	cout<<"Press 1 to add the matrices"<<endl;
	cout<<"Press 2 to multiply the matrices"<<endl;
	cin>>pass;
	
	int add[r1][c1];
	int mult[r1][c2];
	
	switch(pass)
	{
		case 1:
			if(r1==c1&&r2==c2)
			{
			    for(int i=0;i<r1;i++)
			    {
				  for(int j=0;j<c1;j++)
			        {
					 add[i][j]=0;
			         add[i][j]=a[i][j]+b[i][j];
			        }
			    }
			    
			  for(int i=0;i<r1;i++)
			   {
			      for(int j=0;j<c1;j++)
			         cout<<add[i][j]<<" ";
			      cout<<endl;   
		       }
		   }
			else
			cout<<"Matrices are incompatible for addition";
			break;
		case 2:
			if(c1==r2)
			{   for(int i=0;i<r1;i++)
			       for(int k=0;k<c2;k++)
			        {
					  mult[i][k]=0;
			          for(int j=0;j<c1;j++)
			              mult[i][k]+=(a[i][j]*b[j][k]);
			        }
			          
			    for(int i=0;i<r1;i++)
			   {
			       for(int j=0;j<c2;j++)
			           cout<<mult[i][j]<<" ";
			       
			        cout<<endl;   
		       }    
			 
		    }
			else
			cout<<"Matrices are incompatible for Multiplication";
			break;
		default :
		cout<<"Wrong Choice";
	}
	
    return 0;
}