#include<iostream>
#include<time.h>
using namespace std;
void merge(int a[],int lower,int upper);
void sort(int a[],int lower,int middle,int upper);

int main()
{
    int n;
    cout<<"::Merge Sort::"<<endl;
    cout<<"Enter the number of elements"<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"Randomly Generating "<<n<<" elements::"<<endl;
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
	   a[i]=(rand()%1000);
	   cout<<a[i]<<endl;
    }
	
	
	merge(a,0,n-1);
	return 0;
}

void merge(int a[],int lo,int up)
{   
    static int call=0;
    cout<<endl<<"MergeCall:: "<<++call<<endl;
    cout<<"lower:: "<<lo<<endl;
    cout<<"upper:: "<<up<<endl;
    
    cout<<"merge array ::";
    for(int i=lo;i<=up;i++)
	{
	   
	   cout<<a[i]<<" ";
    }
    cout<<endl;
    if(lo<up) 
    {

    	int mid=((lo+up)/2);
	    cout<<"Mid:: "<<mid<<endl;
    	merge(a,lo,mid);
    	
    	merge(a,mid+1,up);
    	sort(a,lo,mid,up);
    }
	
}

void sort(int a[],int lo,int mid,int up)
{
	static int sortcall=0;
	cout<<"Sort Call:: "<<++sortcall<<endl;
	cout<<"lower:: "<<lo<<endl;
    cout<<"upper:: "<<up<<endl;
    cout<<"Mid:: "<<mid<<endl;
    cout<<"sort array ::"<<endl;
   	
   	//sorting
   	int max,temp;
	for(int i=up;i>=lo;i--)
	{   
	    //cout<<"i=="<<i<<"Ailoop:: "<<a[i]<<endl;
		max=i;
		for(int j=lo;j<i;j++)
		if(a[j]>a[max])
		max=j;
		
		//cout<<"max=="<<max<<"Amax:: "<<a[max]<<endl;
		if(max!=i)
		{
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
	    }
	    //cout<<"i=="<<i<<"Ai:: "<<a[i]<<endl;
	}
   	
   	
    for(int i=lo;i<=up;i++)
	{
	   
	   cout<<a[i]<<" ";
    }
    cout<<endl;
}



