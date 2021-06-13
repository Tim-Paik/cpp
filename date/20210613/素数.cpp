//输出100~200中所有的素数
//101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199
#include<iostream>
#include<cmath>
using namespace std;
int main1() {
	for (int i=100;i<=200;i++) {
		int x = 2;
		while(x<=floor(sqrt(i))&&(i%x!=0))
			++x;
		if (x>floor(sqrt(i)))
			cout << i << " ";
	}
}
int main() {
	main1();
	return 0;
	for (int i=100;i<=200;i++) {
		bool ok = true;
		for (int j=2;j<=pow(i,0.5);j++) {
			if (i%j==0) {
				ok = false;
				break;
			}
		}
		if (ok) cout << i << " ";
	}
}
