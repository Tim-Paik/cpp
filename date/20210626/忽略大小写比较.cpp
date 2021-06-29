#include<cstring>
#include<iostream>
using namespace std;
string s1,s2;
int main() {
	getline(cin,s1);
	getline(cin,s2);
	for (int i=0;i<s1.size();i++)
		if (s1[i]>='a'&&s1[i]<='z') s1[i] -= ('a'-'A');
	for (int i=0;i<s2.size();i++)
		if (s2[i]>='a'&&s2[i]<='z') s2[i] -= ('a'-'A');
	if (s1>s2) cout << ">";
	else if (s1<s2) cout << ">";
	else cout << "=";
	return 0;
}

