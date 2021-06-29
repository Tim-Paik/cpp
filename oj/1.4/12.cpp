//12:骑车与走路
#include <iostream>
using namespace std;
int main() {
	float a;
	cin >> a;
	float bikeTime = 27 + 23 + a/3.0;
	float walkTime = a/1.2;
	if (bikeTime>walkTime) cout<<"Walk";
	if (walkTime>bikeTime) cout<<"Bike";
	if (walkTime==bikeTime) cout<<"All";
	return 0;
}