#include <iostream>
using namespace std;
int main() {
	int count,find,tmp,out=0;
	cin >> count >> find;
	for (int i=0;i<count;i++) {
		cin >> tmp;
		if (tmp==find) out++;
	}
	cout << out << endl;
	return 0;
}
