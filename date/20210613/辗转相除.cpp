//շת����� 
/**
 * ��������m,n, ��m,n�����Լ�� Ϊ m%n��m�����Լ�� 
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
