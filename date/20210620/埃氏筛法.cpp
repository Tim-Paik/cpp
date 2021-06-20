#include <cstdio>
#include <cmath>
#include <cstring>
const int MIN=2,MAX=100000;
int MAX_NUM = sqrt(MAX);
bool isPrime[MAX+5];
int main() {
	memset(isPrime,true,MAX);
	for (int i=MIN;i<=MAX;i++) {
		if (!isPrime[i]) continue;
		for (int j=2;i*j<=MAX;j++) {
			isPrime[i*j] = false;
		}
	}
	for (int i=MIN;i<=MAX;i++) {
		if (!isPrime[i]) continue;
		printf("%d ",i);
	}
	return 0;
}
