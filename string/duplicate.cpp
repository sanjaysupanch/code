#include<iostream>
using namespace std;

class check{
    public:
        int H[26]={0},i;
        void duplicate(string s);
};

void check::duplicate(string s){
    string c;
    for(i=0; s[i]!='\0'; i++)
        H[s[i]-97] += 1;
    cout << "Duplicate numbers are :";
     for (i = 0; s[i] != '\0'; i++)
    {

        if(H[s[i]-97]>1){ 
            c=i+97;
            cout << c <<" ";
        }
    }
    cout << "Their is no duplicate" <<endl;
}

int main(){

    check obj;
    string s="coca";
    obj.duplicate(s);

    return 0;
}