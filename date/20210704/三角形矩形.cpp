#include <cstdio>
int main() {
	char t;
	scanf("%c",&t);
	int a,b,c;
	/*
	if (t=='J') {
		scanf("%d %d",&a,&b);
		printf("%d %d",2*(a+b),a*b);
	} else {
		scanf("%d %d %d",&a,&b,&c);
		printf("%d",a+b+c);
	}
	 */
	t=='J'?(scanf("%d %d %d",&a,&b,&c),printf("%d %d",2*(a+b),a*b)):(scanf("%d %d %d",&a,&b,&c),printf("%d",a+b+c));
	return 0;
}

