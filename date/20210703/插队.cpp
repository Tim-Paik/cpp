#include <iostream>
using namespace std;
int main() {
	int n,i,x,q[102];
	cin >> n;
	for (i=1;i<=n;i++) cin >> q[i];
	cin >> x;
	for (i=n;i>=x;i--) q[i+1] = q[i];
	q[x] = q[n+1];
	for (i=1;i<n;i++) cout << q[i] << " ";
	cout << q[n] << endl;
	return 0;
}
