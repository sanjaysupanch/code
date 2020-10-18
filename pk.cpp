#include<iostream>
using namespace std;

int main(){

    int n, count = 0, l = 1, flag=1;
    cin >>n;
    if(n<2){ 
        cout << "Enter number greater than or equal to 2"<<endl;
        return 0;
    }
    int arr[n];
    
    while(l<=n){
        flag=1;
        for(int i=2; i<=l/2;i++){
            if(l%i ==0){
                flag=0;
                break;
            }
            // else  continue;
        }
        if(flag==1){
            cout << l << " ";
            l++;
        }
    }
    // for(int i=0; i<n;i++){
    //     cout << arr[i]<< " ";
    // }

    return 0;
}