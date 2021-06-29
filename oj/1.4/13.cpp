//13:分段函数
#include <cstdio>
double f(double N) {
	if (N<5) return N*(-1.0)+2.5;
	if (N<10) return 2-1.5*(N-3)*(N-3);
	if (N<20) return N/2-1.5;
	if (N<20) return N/2-1.5;
	return 0;
}

int main() {
	double a;
	scanf("%lf", &a);
	printf("%.3lf", f(a));
	return 0;
}