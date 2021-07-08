#include <iostream>
using namespace std;
int main() {
	int a[2][3] = {{4,5,6},{1,2,3}};
	int b[2][4] = {0};
	cout << "数组a如下：" << endl;
	for (int i=0;i<2;i++) {
		for (int j=0;j<3;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	int tmp = 0;
	for (int i=0;i<2;i++) {
		for (int j=0;j<3;j++) {
			b[i][j+1] = a[i][j];
		}
		b[i][0] = a[i][2];
	}
	cout << "移完后的数组b如下：" << endl;
	for (int i=0;i<2;i++) {
		for (int j=0;j<3;j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}