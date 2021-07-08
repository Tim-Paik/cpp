#include<iostream>
using namespace std;
int a[23];
int b[23];
int main() {
	int m,n;
	cin >> m >> n;
	int ans = 0;
	for (int i=0;i<m;i++) cin >> a[i];
	for (int i=0;i<n;i++) cin >> b[i];
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			if (a[i]==b[j]) ans++;
	cout << ans;
	return 0;
}
