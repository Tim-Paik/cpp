#include<iostream>
using namespace std;
int map[1005][1005];
int main() {
	int n,m;
	cin >> n >> m;
	int x1,y1,x2,y2;
	for (int i=1;i<=m;i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j=x1;j<=x2;j++) {
			for (int k=y1;k<=y2;k++) {
				map[j][k] += 1;
			}
		}
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
