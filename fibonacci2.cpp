#include<iostream>
using namespace std;

void fib(int n){
    int a=0, b=1, c, i;
    if(n<=1)
        cout << n << " ";
    
    cout << a <<" "<< b << " ";
    for(i=2;i<n;++i){
        c=a+b;
        a=b;
        b=c;
        cout << b << " ";
    }
}

int main(){
    int n=10;
    fib(n);
    return 0;
    cout << "fibo without recursion";
}
