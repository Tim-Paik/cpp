//01:判断数正负
#include<iostream>
using namespace std;
int main() {
	long N;
	cin >> N;
	if (N>0) {
		cout << "positive";
	} else if (N<0) {
		cout << "negative";
	} else {
		cout << "zero";
	}
	return 0;
}