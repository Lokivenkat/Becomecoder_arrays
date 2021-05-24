#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) 
	{
		cin>>arr[i];
	}
	map<int,int>dic;
	for(int i=0;i<n;i++) 
	{
		dic[arr[i]]++;
	}
	int visits=0,cust;
	for(auto iter:dic)
	 {
		if(iter.second>visits) 
		{
			visits = iter.second;
			cust = iter.first;
		}
	}
	cout<<"Customer ID is "<<cust<<" and his number of visits is "<<visits;
	return 0;
}
