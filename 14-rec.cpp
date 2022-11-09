#include<iostream>
using namespace std;

string subseq(string,string,int,int);
int main()
{
	string st1,st2;
	
	cout<<"::Longest Common SubSequence::"<<endl;
	cout<<"Enter the first string"<<endl;
	cin>>st1;
	cout<<"Enter the second string"<<endl;
	cin>>st2;
	
	
	cout<<"Longest Common Subsequence::"<<endl;
	cout<<subseq(st1,st2,st1.length(),st2.length());
	return 0;
}


string subseq(string str1,string str2,int i,int j)
{  string res=" ";
	if(i==0||j==0)
	    return " ";
	if(str1[i-1]==str2[j-1])
	{
	    cout<<str1[i-1];
	    return res+subseq(str1,str2,i-1,j-1);
	}
    else 
	    return max(subseq(str1,str2,i-1,j),subseq(str1,str2,i,j-1));

}