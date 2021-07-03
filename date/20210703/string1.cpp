#include <iostream>
using namespace std;
int main() {
	char a = 'A';
	cout << a;
	cout << '\\';
	cout << '\n';
	char c;
	c = cin.get();
	cout.put(c) << endl;
	cin.get(c);
	cout.put(c+1) << endl;
	return 0;
}
