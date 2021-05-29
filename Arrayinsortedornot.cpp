#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,arr[n],flag=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		  if(arr[j]<arr[i])
		   {
		  	flag=0;
		    break;
	       }
	   }
	   if(flag==0)
	   {
	   	cout<<"no";
	   	break;
	   }
   }
	   if(flag==1)
	   {
	   	cout<<"yes";
	   }
    
}
