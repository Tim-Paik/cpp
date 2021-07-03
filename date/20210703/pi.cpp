#include <iostream>
using namespace std;
int main() {
	int i = 1;
	double cur = 1, sum = 0;
	while (cur > 1e-6) {
		cur = 1.0/i;
		if (((i - 1) / 2) % 2) {
			sum -= cur;
		} else {
			sum += cur;
		}
		i += 2;
	}
	cout << 4*sum << endl;
}
