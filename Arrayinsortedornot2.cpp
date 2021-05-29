#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n],i,flag=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			flag=1;
			break;
		}
	}
	     
	if(flag==1)
	{
	  cout<<"no";
    } 
    else
    {
    	cout<<"yes";
	  
    }
}
