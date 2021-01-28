#include <bits/stdc++.h>
using namespace std;
 
const int N=10e5+7;
int n,k=1;
int arr[N];

void Sieve(){
	for(int i=2;i<N;i++)
	{
		if(arr[i]==0)
		{
			arr[i]=k;
			for(int j=i+i;j<N;j+=i)
			{
				arr[j]=k;	
			}
			k++;	
		}
	}
}
 
int main()
{
	cin>>n;
	Sieve();
	for(int i=2;i<n+1;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
