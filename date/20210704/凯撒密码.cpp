#include <iostream>
using namespace std;
char a[256];
int main() {
	cin.get(a,255);
	cin.get();
	int t;
	cin >> t;
	for (int i=0;a[i]!=0;i++) 
	if (a[i]>='A'&&a[i]<='Z') a[i]=a[i]+t>'Z'?a[i]+t-26:a[i]+t;
	cout << a << endl;
}

