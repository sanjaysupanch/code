#include <iostream>
using namespace std;

class anagram{
    
    public:
    int H[26]={0}, i;
    void ana(string s, string s2);
};

void anagram::ana(string s, string s2){

    if(s.length()!=s2.length())
        cout << "It's not anagram";
    
    for(i=0; s[i]!='\0'; i++){
        H[s[i]-97] +=1;
    }
    for (i = 0; s2[i] != '\0'; i++)
    {
        H[s2[i]-97] -= 1;
        if(H[i]<0){
            cout << "It's not a anagram";
        }
    }
}

int main(){

    anagram obj;
    string s = "decimal";
    string s2 = "medical";
    obj.ana(s,s2);


    return 0;
    
}