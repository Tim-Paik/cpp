//17:判断闰年
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a%4==0) {
		if (a%100==0&&a%400!=0) {
			cout << "N";return 0;
		}
		cout << "Y";return 0;
	}
	cout << "N";return 0;
}