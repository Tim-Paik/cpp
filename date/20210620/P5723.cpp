#include <cstdio>
#include <cmath>
#include <cstring>
const int MIN=2,MAX=100000;
int MAX_NUM = sqrt(MAX);
bool isPrime[MAX+5];
int main() {
	int L;
	scanf("%d",&L);
	memset(isPrime,true,MAX);
	for (int i=MIN;i<=MAX;i++) {
		if (!isPrime[i]) continue;
		for (int j=2;i*j<=MAX;j++) {
			isPrime[i*j] = false;
		}
	}
	int tmp = 0, cnt = 0;
	for (int i=MIN;i<=MAX;i++) {
		if (!isPrime[i]) continue;
		tmp+=i;
		if (tmp<=L) {
			printf("%d\n",i);
			cnt++;
		} else { break;}
	}
	printf("%d",cnt);
	return 0;
}
