#include <iostream>
using namespace std;
int a[10003];
int main() {
	int n=0,x=0,ans=-1;
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> a[i];
	cin >> x;
	for (int i=0;i<n;i++) {
		if (a[i]==x) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
}
