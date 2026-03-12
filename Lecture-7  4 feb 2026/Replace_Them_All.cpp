#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='0'){
			s[i]='5';
		}
	}
	cout<<s<<endl;
	return 0;
}