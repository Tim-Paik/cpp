#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 200;
int main() {
	int sum[MAX] = {0};
	char num1[MAX],num2[MAX];
	int i,j,len;
	int n2[MAX] = {0};
	cin.get(num1, MAX);
	cin.get();
	cin.get(num2, MAX);
	int len1 = strlen(num1), len2 = strlen(num2);
	len = len1>len2?len1:len2;
	for (i = len1 - 1, j = 0; i >= 0; i--, j++) sum[j] = num1[i] - '0';
	for (i = len2 - 1, j = 0; i >= 0; i--, j++) n2[j] = num2[i] - '0';
	for (i = 0; i <= len; i++) {
		sum[i] += n2[i];
		if (sum[i] > 9) {
			sum[i] -= 10;
			sum[i+1]++;
		}
	}
	if (sum[len]!=0) len++;
	cout << " " << num1 << endl << "+" << endl << " " << num2 << endl << "=" << endl << " ";
	for (i = len-1; i >= 0; i--) cout << sum[i];
	cout << endl;
	return 0;
}

