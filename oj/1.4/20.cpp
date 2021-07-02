//20:求一元二次方程的根
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double d = b*b-4*a*c;
	if (d==0) {
		printf("x1=x2=%.5lf", ((-b)/(2*a))==0?0:((-b)/(2*a)));
	} else if (d>0) {
		printf("x1=%.5lf;x2=%.5lf", ((-b+sqrt(d))/(2*a)), ((-b-sqrt(d))/(2*a)));
	} else {
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", (-b/(2*a))==0?0:(-b/(2*a)), sqrt(-d)/(2*a), (-b/(2*a))==0?0:(-b/(2*a)), sqrt(-d)/(2*a));
	}
	return 0;
}