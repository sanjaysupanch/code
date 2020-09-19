#include<iostream>
using namespace std;

class vowels{
    public:
        int count = 0;
        void word(string s);
};

void vowels::word(string s){
    
    for(int i=0; s[i]!='\0'; i++){
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'i' || s[i] == 'I' || s[i] == 'O' || s[i] == 'o' || s[i] == 'u' || s[i] == 'U' )
           count++; 
    }
    cout << "Their are " << count << " vowels" << " and " << (s.length() - count) << " consonant" << endl;
}

int main(){
    vowels words;
    string s;
    cout << "Please enter word : ";
    cin >> s;
    words.word(s);

    return 0;
}