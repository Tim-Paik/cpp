//°ÙÇ®Âò°Ù¼¦
#include<iostream>
using namespace std;
int main() {
	for(int x=0;x<=100/5;x++) {
		for(int y=0;y<=(100/3);y++) {
			int z = 100 - x - y;
			if ((z%3==0)&&(x+y+z==100)&&(x*5+y*3+z/3==100)) cout<<x<<" "<<y<<" "<<z<<" "<<endl;
		}
	}
	return 0;
}
