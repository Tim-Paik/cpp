//16:计算线段长度
#include<cstdio>
#include<cmath>
int main() {
	double Xa,Ya,Xb,Yb;
	scanf("%lf %lf %lf %lf",&Xa,&Ya,&Xb,&Yb);
	printf("%.3lf",sqrt(pow(fabs(Xa-Xb),2)+pow(fabs(Ya-Yb),2)));
	return 0;
}

