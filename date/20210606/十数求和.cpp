#include <iostream>
using namespace std;
int main() {
	int a = 10,ans = 0,tmp=0;
	while (a > 0) {
		a--;
		cin >> tmp;
		ans += tmp;
	}
	cout << ans << endl;
}