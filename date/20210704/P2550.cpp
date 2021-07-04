#include <iostream>
using namespace std;
const int MAX_NUM = 7;
int winningNumbers[MAX_NUM];
int winningSituation[MAX_NUM+1];
int main() {
	int n;
	cin >> n;
	for (int i=0;i<MAX_NUM;i++) cin >> winningNumbers[i];
	for (int i=0;i<n;i++) {
		int winningNumber = 0;
		int thisNumber = 0;
		for (int i=0;i<MAX_NUM;i++) {
			cin >> thisNumber;
			for (int i=0;i<MAX_NUM;i++)
				if (thisNumber==winningNumbers[i]) winningNumber++;
		}
		winningSituation[MAX_NUM - winningNumber]++;
	}
	for (int i=0;i<MAX_NUM;i++) cout << winningSituation[i] << " ";
}