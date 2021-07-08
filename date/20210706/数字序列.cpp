#include <iostream>
#include <algorithm>
using namespace std;
int a[1005];
int main() {
	int n;
	cin >> n;
	for (int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	for (int i=1;i<=n;i++) {
		if (a[i-1]!=i) {
			cout << "BAD";
			return 0;
		}
	}
	cout << "NICE";
	return 0;
}
