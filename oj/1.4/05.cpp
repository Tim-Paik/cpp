//05:整数大小比较
#include <iostream>
using namespace std;
int main() {
	int x,y;
	cin>>x>>y;
	if(x>y) cout<<">";
	else if(x<y) cout<<"<";
	else cout<<"=";
	return 0;
}