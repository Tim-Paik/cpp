#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	string str;
	getline(cin,str);
	char a,b;
	cin >> a >> b;
	replace(str.begin(),str.end(),a,b);
	cout << str;
}
