#include <cstdio>
int main() {
	int a;
	scanf("%d",&a);
	int ch = 1;
	for (int i=0;i<a;i++) {
		for (int j=0;j<(a-i);j++) {
			printf("%02d",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
