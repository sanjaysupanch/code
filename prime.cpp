#include <iostream>
using namespace std;

bool prime(int n){
    if (n<=1)
        return false;
    for(int i=2; i<n/2; i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main(){
    int m=10;
    int index=0;
    int arr[m];
    for(int j=0; j<m; j++){ 
        if(prime(j)==1 && j%10==3){ 
            arr[index]=j;
            index++;
        }
        else
            continue;
    }
    m=index;
    cout << "{ ";
    for(int i=0; i<m; i++)    
        cout << arr[i] << ", ";
    cout << "}\n";
}