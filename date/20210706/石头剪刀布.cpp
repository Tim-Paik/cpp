#include <iostream>
using namespace std;
int a[105];
int b[105];
int main() {
	int N,NA,NB;
	cin >> N >> NA >> NB;
	for (int i=0;i<NA;i++) cin >> a[i];
	for (int i=0;i<NB;i++) cin >> b[i];
	int awin=0,bwin=0;
	for (int i=0;i<N;i++) {
		if (a[i%NA]==b[i%NB]) continue;
		if ((a[i%NA]<b[i%NB]&&!(a[i%NA]==0&&b[i%NB]==5))||(a[i%NA]==5&&b[i%NB]==0)) {
			awin++;
		} else {
			bwin++;
		}
	}
	if (awin>bwin) cout << "A";
	if (awin<bwin) cout << "B";
	if (awin==bwin) cout << "draw";
	return 0;
}

