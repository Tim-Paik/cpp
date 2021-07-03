#include<iostream>
#include<string>
using namespace std;
int main() {
	string a = "Hello";
	char b[] = {'H','e','l','l','o','\0'};
	char c[] = "Hello";
	string d(b);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	return 0;
}
