//��dowhileѭ��ʵ��1992��1992�ĳ˻���ĩ��λ���Ƕ��� 
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
