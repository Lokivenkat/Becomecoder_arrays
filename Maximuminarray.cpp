#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(maxi<arr[i])
		{
			maxi=arr[i];
		}
	}
	cout<<maxi;
	
}
