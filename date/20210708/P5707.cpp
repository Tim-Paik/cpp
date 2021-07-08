#include <cstdio>
int main() {
	int s,v;
	scanf("%d %d",&s,&v);
	int t1 = 32, t2 = 0;
	t2 -= (int)(1.0*s/v+10.99999);
	for (;t2<0;t2+=60) t1--;
	if (t1 >= 24) t1-=24;
	printf("%02d:%02d",t1,t2);
	return 0;
}