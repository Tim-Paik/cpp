//18:等差数列末项计算
#include<cstdio>
int main() {
	int a1,a2,n;
	scanf("%d %d %d",&a1,&a2,&n);
	printf("%d",a1+(a2-a1)*(n-1));
	return 0;
}

