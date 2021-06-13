//辗转相除法 
/**
 * 对于任意m,n, 有m,n的最大公约数 为 m%n和m的最大公约数 
 */
#include <iostream>
using namespace std;
int main() {
	int m,n,r;
	cin >> m >> n;
	r = m % n;
	while (r!=0) {
		m = n;
		n = r;
		r = m % n;
	}
	cout << n << endl;
	return 0;
}
