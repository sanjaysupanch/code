#include<iostream>

using namespace std;

int reverse_digit(int n){
    int rev=0;
    while (n>0){
        rev=rev*10+n%10;
        n = n/10;
    }
    return rev;
    
    
}

int main(){
    int n=1010;
    int rev;
    rev=reverse_digit(n);
    (rev==n)? cout << "It's palindrome\n": cout << "It's not a palindrome\n";
}