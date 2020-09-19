#include <iostream>
using namespace std;

int main()
{
	// char temp;
	// cin >> temp;
	// cout << temp << endl;
	// cout << sizeof(temp) <<endl;

	// char name[]={ 'A', 'B', 'C', };  //is wale me \0 include nahi kar rha hai so iski size 3 hogi
	// char name[] = "ABC";  	    //is wale include kar rha hai \0 to iski size 4 hogi
	// char *name="sanjay";
	// cin >> name;
	// char *name="sanjay";
	
	// name;
	// cout << name; 
	// cout << endl << sizeof(name) <<endl;//*
	// cout << *name;
	// string s = "welcome";
	// int i, count=0;
	// // for(i=0; s[i]!='\0'; i++){
	// // 	count ++;
	// // }
	// s[1]="o";
	// cout << s << endl;
	// cout << count;	

	string s="welcome";
	cout << s.length() << endl;         //<====
	cout << s.size() << endl;
	// cout << s[1]<< endl;
	s.append("again"); 					//<====
	string s3;
	s3="welcomeagain";
	
	if(s.compare(s3)==0){				//<====
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	int i;
	for(i=0; s[i]!=0; i++){
		cout << s[i] << "_";
	}
	cout <<endl;

	string sub = s.substr(0, 5); 		//<====
	cout << sub << endl;
	
	s.insert(3, "@@");
	s.pop_back();
	// s.pop_rback();
	cout << s << endl;

	size_t pos = s.find("@@"); 			//<====
	cout << pos << endl;

	cout << s.replace(5, 5, "Geeks") << endl; //<====

	s[1] = 'z'; 						//<====single quote
	cout << s << endl;
	// reverse(s.begin(), s.end());
	// cout << s << endl;

	

	return 0;
}