//02:输出绝对值
#include<cstdio>
int main() {
	float N;
	scanf("%f", &N);
	printf("%.2f", (N<0?(N*(-1)):N));
	return 0;
}