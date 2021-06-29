//09:判断能否被3，5，7整除
#include <iostream>
using namespace std;
int main() {
	bool ok = false;
	int a;
	cin >> a;
	if (a%3==0) cout << "3 ",ok = true;
	if (a%5==0) cout << "5 ",ok = true;
	if (a%7==0) cout << "7 ",ok = true;
	if (!ok) cout << "n";
	return 0;
}