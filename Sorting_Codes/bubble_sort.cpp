/*
		Complexity          ==> Worst Case : O(n^2)
					            Best Case  : O(n^2)
		Stable Sort ?  	    ==> Yes
		Inplace Sorting ?   ==> Yes 
	
*/





#include<bits/stdc++.h>
#include<set>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define input_txt() freopen("input.txt", "r", stdin);
#define output_txt() freopen("output.txt", "w", stdout);
#define vec vector
#define lli long long int
#define test_lli ll t; cin>>t; while(t--)
#define test_int int t; cin>>t; while(t--)
#define ll long long
#define pb push_back
#define um unordered_map
#define vi vec<int>
#define vc vec<char>
#define vll vec<lli>
#define m_p make_pair
const int mod=1000000007;

using namespace std;

/*

bool isPrime(int x)
{
	 if(x==1)
	 return false;
	 for(int i=2; i*i<=n; i++)
	 {
	  	if(x%i==0)
	  	{
			return false;
		}
	 }
	 return true;
}

*/

int solve(int arr [], int x)
{
	for(int i=0; i<x-1; i++)
	{
		for(int j=0; j<x-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0; i<x; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	IOS
//	input_txt()
//	output_txt()
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		cin>>arr[i];
		solve(arr, n);

	return 0;
}

