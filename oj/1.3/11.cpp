//11:计算浮点数相除的余数
#include<cstdio>
int main() {
	double a,b;
	scanf("%lf %lf",&a,&b);
	printf("%g",a-(int)(a/b)*b);
	return 0;
}
