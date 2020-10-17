/*
		Complexity          ==> Worst Case : O(n^2)
					            Best Case  : O(n)
		Stable Sort ?  	    ==> Yes
		Inplace Sorting ?   ==> Yes 
	
*/

### Algorithm
To sort an array of size n in ascending order:
1: Iterate from arr[1] to arr[n] over the array.
2: Compare the current element (key) to its predecessor.
3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.



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
	for(int i=1; i<n; i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
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

