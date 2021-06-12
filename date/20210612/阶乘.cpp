#include <iostream>
using namespace std;
int main() {
	int n = 15;
	long long a = 1LL;
	long long b;
	for(int i=1; i <= n; i++ )
	{
		b = a * i;
		a = b;
	 } 
	 cout << b << endl;
	 return 0;
}
