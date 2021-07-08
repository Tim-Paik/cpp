#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 205;
int main() {
	char a[MAX] = {0}, b[MAX] = {0};
	cin.get(a, MAX);
	cin.get();
	cin.get(b, MAX);
	if (strlen(a)!=strlen(b)) {
		cout << (strlen(a)>strlen(b)?"a>b":"a<b") << endl;
		return 0;
	}
	for (int i=0;i<strlen(a);i++) {
		if (a[i]!=b[i]) {
			cout << (a[i]>b[i]?"a>b":"a<b") << endl;
			return 0;
		}
	}
	cout << "a=b" << endl;
	return 0;
}

