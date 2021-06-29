#include<iostream>
using namespace std;
int main() {
	int L, load = 0, ans = 0;
	cin >> L;
	for (int i=2;;i++) {
		int isPrime = 1;
		for (int j=2;j*j<=i;j++) {
			if  (i%j==0) {
				isPrime = 0;
				break;
			}
		}
		if (!isPrime) continue;
		if (i+load>L) break;
		cout << i << endl;
		ans++;
		load += i; 
	}
	cout << ans;
	return 0;
}
