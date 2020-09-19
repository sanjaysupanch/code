#include<iostream>

using namespace std;

int main(){

    string s="welcome";

    for(int i=0; s[i]!='\0'; i++){
        s[i]=s[i]-32;
    }
    cout << s << endl;

    return 0;
}