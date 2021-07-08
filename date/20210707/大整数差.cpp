#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 205;
int main() {
	char a[MAX], b[MAX];
	cin.get(a, MAX);
	cin.get();
	cin.get(b, MAX);
	int sum[MAX] = {0}, n1[MAX] = {0}, n2[MAX] = {0};
	int len1 = strlen(a), len2 = strlen(b);
	int len = len1>len2?len1:len2;
	int i,j;
	int flag = 0;
	if (len1>len2) flag = 1;
	if (len1<len2) flag = -1;
	if (len1==len2) {
		for (int i=0;i<len;i++) {
			if (a[i]==b[i]) continue;
			if (a[i]>b[i]) {
				flag = 1;
				break;
			} else {
				flag = -1;
				break;
			}
		}
	}
	int num1,num2;
	if (flag==0) cout << "0" << endl;
	else {
		if (flag>0) {
			for (i = len1-1,j=0;i>=0;i--,j++)
				n1[j]=a[i]-'0';
			for (i = len2-1,j=0;i>=0;i--,j++)
				n2[j]=b[i]-'0';
		}
		for (i=0;i<len;i++) {
			if (n1[i]-n2[i]>=0) sum[i] = n1[i]-n2[i];
			else sum[i] = 10+n1[i]-n2[i],n1[i+1]--;
		}
		cout << (flag<0?"-":"");
		bool show = false;
		for (i=len-1;i>=0;i--) {
			if (sum[i]) show = true;
			if (show) cout << sum[i];
		}
		cout << endl;
	}
	return 0;
}

