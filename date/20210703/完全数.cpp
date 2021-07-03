#include <iostream>
using namespace std;
int main() {
	int m,n,s,k=0;
	cin >> m >> n;
	for (int i=m;i<=n;i++) {
		s = 0;
		for (int j=1;j<i;j++) {
			if (i%j==0) s += j;
		}
		if (s==i) {
			cout << i << endl;
			k++;
		}
	}
	if (k==0) cout << "NONE" << endl;
	return 0;
}