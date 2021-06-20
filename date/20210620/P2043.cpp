#include <cstdio>
#include <cstring>
const int MIN=2,MAX=10000;
int ans[MAX];
bool isPrime[MAX+5];
int main() {
	memset(isPrime,true,MAX);
	for (int i=MIN;i<=MAX;i++) {
		if (!isPrime[i]) continue;
		for (int j=2;i*j<=MAX;j++) {
			isPrime[i*j] = false;
		}
	}
	int N;
	scanf("%d",&N);
	for (int a=0;N>=a;a++) {
		int tmp = N - a;
		for (int i=MIN;tmp>1;i++) {
			int j = 0;
			while (tmp%i==0) {
				tmp /= i;
				j++;
			}
			ans[i] += j;
		}
	}
	for (int i=0;i<=N;i++) {
		if (ans[i]!=0) {
			printf("%d %d\n",i,ans[i]);
		}
	}
	return 0;
}
