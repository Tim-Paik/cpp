#include <iostream>
using namespace std;
int main() {
	int count = 0,ans = 1,base = 2;
	cin >> count;
	while (count > 0) {
		count--;
		ans = ans * base;
	}
	cout << ans << endl;
}
