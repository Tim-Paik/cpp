//16:三角形判断
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a+b>c&&a+c>b&&b+c>a)?"yes":"no");
	return 0;
}