#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cap,n,arr[cap];
	cin>>cap;
	cin>>n;
	for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	int pos,x;
	cin>>pos;
	cin>>x;
	if(n==cap)
	{
		cout<<"array is full";
	}
	else
	{
		int index=pos-1;
		for(int i=n-1;i>=index;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[index]=x;
		n++;
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}
