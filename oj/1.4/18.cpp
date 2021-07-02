//18:点和正方形的关系
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a<0) a=a*(-1);
	if (b<0) b=b*(-1);
	if (a<=1&&b<=1) cout << "yes";
	else cout << "no";
	return 0;
}