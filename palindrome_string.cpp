#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char strings[20];
    cin >> strings;
    int length, flag=0;
    
    length=strlen(strings);
    
    for(int i=0; i<length; i++){
        if(strings[i] !=strings[length-i-1]){ 
            flag=1;
            break;
        }
    }
    (flag==1) ? cout << "It's not a palindrome\n":cout << "It's palindrome\n";
}