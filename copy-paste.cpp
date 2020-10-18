#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;



int main(int argc, char const *argv[])
{
	int t, n,k;
	int a[1035];
	cin >> t;

	while(t--){

		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
	}

	sort(a, a+n);




	return 0;
}