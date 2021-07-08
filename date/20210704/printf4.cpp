#include <cstdio>
int main() {
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("%d,%d",a,b);
	int c,d,e;
	scanf("%d+%d+%d",&c,&d,&e);
	printf("%d+%d+%d",c,d,e);
	int f,g;
	scanf("%d+%*d+%d",&f,&g);
	printf("%d,%d",f,g);
	return 0;
}
