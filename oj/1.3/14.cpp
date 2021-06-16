//14:大象喝水
#include<cstdio>
#include<cmath>
const double Pi = 3.14159;
int main() {
	int h,r;
	scanf("%d %d",&h,&r);
	printf("%.0lf",ceil(20000.0/(Pi*r*r*h)));
	//printf("%d",(int)(20000.0/(Pi*r*r*h)+0.99999999999999999)); //更简便？ 
	return 0;
}
