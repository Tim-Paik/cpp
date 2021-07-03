#include <iostream>
using namespace std;
int main() {
	int n,i,x,q[102];
	cin >> n;
	for (i=1;i<=n;i++) cin >> q[i];
	cin >> x;
	for (i=x;i<n;i++) q[i]=q[i+1];
	n-=1;
	for (i=1;i<=n;i++) cout << q[i] << " ";
	cout << endl;
	return 0;
}
