//09:与圆相关的计算
#include<cstdio>
const double pi = 3.14159;
int main() {
	double r;
	scanf("%lf",&r);
	printf("%.4lf %.4lf %.4lf",r*2,2*pi*r,pi*r*r);
	return 0;
}
