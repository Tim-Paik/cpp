#include <iostream>
using namespace std;
int map[42][42];
int main() {
	int N = 0;
	cin >> N;
	int lastX = 1, lastY = N/2 + 1;
	map[lastX][lastY] = 1;
	for (int i=2;i<=N*N;i++) {
		if (lastX==1&&lastY!=N) {
			lastX = N, lastY += 1;
			map[lastX][lastY] = i;
		} else if (lastY==N&&lastX!=1) {
			lastX -= 1, lastY = 1;
			map[lastX][lastY] = i;
		} else if (lastX==1&&lastY==N) {
			lastX += 1, lastY = lastY;
			map[lastX][lastY] = i;
		} else if (lastX!=1&&lastY!=N) {
			if (map[lastX-1][lastY+1]==0) { lastX -= 1, lastY += 1; }
			else { lastX += 1, lastY = lastY; }
			map[lastX][lastY] = i;
		}
	}
	for (int i=1;i<=N;i++) {
		for (int j=1;j<=N;j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}