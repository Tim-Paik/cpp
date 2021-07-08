#include<cstdio>
int main() {
	int a,b;
	char ch;
	scanf("%d%c%d",&a,&ch,&b);
	switch (ch) {
		case '+': printf("%d\n",a+b); break;
		case '-': printf("%d\n",a-b); break;
		case '*': printf("%d\n",a*b); break;
		case '/': (a%b)?printf("%.2f\n",a*1.0/b):printf("%d\n",a/b);
	}
	return 0;
}