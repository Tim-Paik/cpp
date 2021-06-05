#include <iostream>
using namespace std;
int main() {
	long long a,out=1;
	cin>>a;
	for (int i=2;i<=a;i++) {
		out = out*i;
	}
	cout<<out;
    return 0;
}
