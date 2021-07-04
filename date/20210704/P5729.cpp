#include<iostream>
using namespace std;
int block[25][25][25];
int main () {
	int w,x,h;
	cin >> w >> x >> h;
	for (int i=1;i<=w;i++) {
		for (int j=1;j<=x;j++) {
			for (int k=1;k<=h;k++) {
				block[i][j][k] = 1;
			}
		}
	}
	int q;
	cin >> q;
	int x1,y1,z1,x2,y2,z2;
	for (int i=1;i<=q;i++) {
		cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
		for (int j=x1;j<=x2;j++) {
			for (int k=y1;k<=y2;k++) {
				for (int l=z1;l<=z2;l++) {
					block[j][k][l] = 0;
				}
			}
		}
	}
	int ans = 0;
	for (int i=1;i<=w;i++) {
		for (int j=1;j<=x;j++) {
			for (int k=1;k<=h;k++) {
				if (block[i][j][k]) {
					ans++;
				}
			}
		}
	}
	cout << ans;
	return 0;
}
