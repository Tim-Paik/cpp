#include <iostream>
using namespace std;
int main() {
	int n, m, x, c = 0;
	cin >> n >> m;
	for(int i=1; i <=n; i++)
	{
		cin >> x;
		if (x == m) c++;
	 } 
	 cout << c << endl;
	 return 0;
}
