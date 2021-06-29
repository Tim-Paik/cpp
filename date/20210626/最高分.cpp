#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n = 10;
	double score, min, max, sum = 0;
	while (n) {
		cin >> score;
		sum += score;
		if (n==10) max = score, min = score;
		else {
			if (score > max) max = score;
			if (score < min) min = score;
		}
		n--;
	}
	cout << fixed << setprecision(2) << (sum - min - max)/8 << endl;
	return 0;
}
