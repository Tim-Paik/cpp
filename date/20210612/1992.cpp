//用dowhile循环实现1992个1992的乘积的末两位数是多少 
#include <iostream>
using namespace std;
int main() {
	int i = 1;
	int ans = 1;
	do {
		ans = (ans*92)%100;
		i++;
	} while (i <= 1992);
	cout << ans;
	return 0;
}
