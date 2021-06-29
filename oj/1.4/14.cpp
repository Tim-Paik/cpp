//14:计算邮资
#include <iostream>
using namespace std;
int main() {
	int weight, cost = 8;
	char isQuick;
	cin >> weight >> isQuick;
	if (isQuick=='y') cost+=5;
	if (weight>1000) cost += ((weight-501)/500)*4;
	cout << cost;
	return 0;
}