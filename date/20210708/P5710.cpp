#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	bool a1 = (x%2==0);
	bool a2 = (x>4&&x<=12);
	cout << (a1&&a2) << " " << (a1||a2) << " " << ((a1&&!a2)||(!a1&&a2)) << " " << (!a1&&!a2) << endl;
	return 0;
}