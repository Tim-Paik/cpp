#include <iostream>
using namespace std;
void Reverse(char s[], int n) {
	for (int i=0,j=n-1;i<j;i++,j--) {
		char c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
int main() {
	char s[] = "hello";
	Reverse(s,5);
	cout << s << endl;
	return 0;
}