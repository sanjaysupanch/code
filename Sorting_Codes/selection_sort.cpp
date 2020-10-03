/*
		Complexity  Time        ==> Worst Case : O(n^2)
					                Best Case  : O(n^2)
					Space       ==> O(1)
		Stable Sort ?  	    ==> No, but can be made stable
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


int solve(int arr[], int n)
{
	int min_idx;
	for(int i=0; i<n-1; i++)
	{
		min_idx=i;
		for(int j=i+1; j<n; j++)
		{
			if(arr[j]<arr[min_idx])
			{
				min_idx=j;
			}
		}
		int temp=arr[min_idx];
		arr[min_idx]=arr[i];
		arr[i]=temp;
	}
	for(int i=0; i<n; i++)
	cout<<arr[i]<<" ";
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

