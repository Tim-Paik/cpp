#include <iostream>
using namespace std;
int a[1005];
int main() {
	int n,ans=0;
	cin >> n;
	for (int i=0;i<n;i++) cin >> a[i];
	int x=0,y=0;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (i==j) continue;
			if (a[i]<a[j]&&i>j) x++;
			if (a[i]<a[j]&&j>i) y++;
		}
		if (x==y) ans++;
		x=0;y=0;
	}
	cout << ans;
}
