#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;



int main()
{
	int n=25, count=0, k=1, l=1;
	vector<int> v1, v2, v3;

	for(int i=1; i<=5; i++){
		if(count%2==0){ 
			for(int j=1; j<=5; j++,k++){
				v1.push_back(k);
				
			}
		}
		else{
			for(int j=1; j<=5; j++,k++){
				v2.push_back(k);
			}
		}
		reverse(v2.begin(), v2.end())
		count++;
		

	}

	cout << "\n";
	for(int i=0;i<5;i++){
		if(i%5==0){
			for(int j=1; j<=5; j++,l++){
				v3.push_back(v1[i])
			}
		}
		else{
			for(int j=1; j<=5; j++,l++){

			}
		}
	}

	return -1;
}
