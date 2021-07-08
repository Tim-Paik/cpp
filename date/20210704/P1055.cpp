#include <cstdio>
int main() {
	char a,b,c,d,e,f,g,h,i;
	char j,k;
	scanf("%c-%c%c%c-%c%c%c%c%c-%c",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	k = (int)(((a-'0')*1+(b-'0')*2+(c-'0')*3+(d-'0')*4+(e-'0')*5+(f-'0')*6+(g-'0')*7+(h-'0')*8+(i-'0')*9) % 11);
	k = k==10?'X':k+'0';
	if (j==k) {
		printf("Right");
	} else {
		printf("%c-%c%c%c-%c%c%c%c%c-%c",a,b,c,d,e,f,g,h,i,k);
	}
	return 0;
}

