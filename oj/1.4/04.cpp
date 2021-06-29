//04:奇偶ASCII值判断
#include<cstdio>
int main() {
	char n;
	scanf("%c", &n);
	printf("%s", (n%2==0)?"NO":"YES");
	return 0;
}