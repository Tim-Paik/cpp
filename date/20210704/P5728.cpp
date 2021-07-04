#include<iostream>
#include<cmath>
using namespace std;
int score[1005][3];
int main() {
	int N = 0, ans = 0;
	int dzh=0,dmath=0,deng=0;
	cin >> N;
	for (int i=0;i<N;i++) {
		cin >> score[i][0] >> score[i][1] >> score[i][2];
	}
	for (int i=0;i<N;i++) {
		for (int j=i+1;j<N;j++) {
			dzh = abs(score[i][0]-score[j][0]);
			dmath = abs(score[i][1]-score[j][1]);
			deng = abs(score[i][2]-score[j][2]);
			if (dzh<=5&&dmath<=5&&deng<=5&&(abs((score[i][0]+score[i][1]+score[i][2])-(score[j][0]+score[j][1]+score[j][2]))<=10)) {
				ans++;
			}
			dzh = 0; dmath = 0; deng = 0;
		}
	}
	cout << ans << endl;
	return 0;
}
