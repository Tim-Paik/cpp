#include<iostream>
#define MAX_ROOM 100
#define MAX_WAITER 100
using namespace std;
int ROOMS[MAX_ROOM+5]; 
int main() {
	for (int i=1;i<=MAX_WAITER;i++) {
		for (int j=1;j<=MAX_ROOM;j++) {
			if (j%i==0) ROOMS[j]=ROOMS[j]?0:1;
		}
	}
	for (int i=1;i<=MAX_ROOM;i++) {
		cout << ROOMS[i] << " ";
	}
	return 0;
}
