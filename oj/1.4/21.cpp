//21:苹果和虫子2
#include <iostream>
using namespace std;
int main() {
	int n, x, y;
	cin >> n >> x >> y;
	cout << ((n-(int)(y*1.0/x+0.99999))<=0?0:(n-(int)(y*1.0/x+0.99999)));
	return 0;
}