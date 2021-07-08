#include <iostream>
#include <algorithm>
using namespace std;
int a[3005];
int b[3005];
int main() {
	int n;
	cin >> n;
	for (int i=0;i<n;i++) cin >> a[i];
	if (n=1) {
		cout << "NICE";
		return 0;
	}
	for (int i=0;i<n-1;i++) {
		b[i] = abs(a[i]-a[i+1]);
	}
	sort(b,b+n);
	for (int i=1;i<n;i++) {
		if (b[i-1]!=i) {
			cout << "BAD";
			return 0;
		}
	}
	cout << "NICE";
	return 0;
}
