#include<iostream>

using namespace std;

class check{

    public:
        int palindrome(string s);
};

int check :: palindrome(string s){
    int n = s.length();
    
    for (int i=0; s[i]!='\0'; i++){
        if(s[i]!=s[n-1])
            return 0;
        else 
            return 1;
    }
    return 0;

}

int main(){

    check obj;
    string s;
    cin >> s;
    if(obj.palindrome(s)==1){
        cout << "It's a palindrome";
    }
    else{
        cout << "It's not a palindrome";
    }

    return 0;
}