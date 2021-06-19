#include<iostream>
using namespace std;
int main() {
	int n,result,k,i,temp;
	while(cin>>n) {
		result=0,k=1;
		temp = n;
		while(temp) {
			i=temp%2;
			result=k*i+result;
			k=k*10;
			temp=temp/2;
		}
		cout<<result<<endl;
	}
	return 0;
}
