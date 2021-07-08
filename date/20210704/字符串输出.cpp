#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char s[1000];
	cin.get(s,1000);
	for (int i = strlen(s);i>0;i--) {
		s[i] = '\0';
		cout << s << endl;
	}
	return 0;
}
