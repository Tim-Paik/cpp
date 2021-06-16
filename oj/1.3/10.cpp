//10:计算并联电阻的阻值
#include<cstdio>
int main() {
	float a,b;
	scanf("%f %f",&a,&b);
	printf("%.2f",1/(1/a+1/b));
	return 0;
}
