//平均数 最大值 最小值 
#include<iostream>
using namespace std;
int a[5];
int main() {
	for(int i=0;i<5;i++)
		cin >> a[i];
	cout << (a[0]+a[1]+a[2]+a[3]+a[4])/5 << " ";
	int max=0,min=a[0];
	for(int i=0;i<5;i++) {
		max = max>a[i]?max:a[i];
		min = min<a[i]?min:a[i];
	}
	cout << max << " " << min << endl;
	return 0;
}
