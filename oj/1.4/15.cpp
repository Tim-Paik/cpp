//15:最大数输出
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a>b?(a>c?a:c):(b>c?b:c));
	return 0;
}