#include<iostream>
using namespace std;

int main(){

    string s= "sanjay";

    int n = s.length()-1;
    int i=0;

    while (i<=n){
        swap(s[i], s[n]);
        i++;
        n--;
    }
    cout << s << endl;
    

    
    return 0;
}