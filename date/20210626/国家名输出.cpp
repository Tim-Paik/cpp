#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char t[21],cname[11][21];
	for (int i=0;i<10;i++)
		gets(cname[i]);
	for (int i=0;i<9;i++) {
		int k=i;
		for (int j=i+1;j<10;j++)
			if (strcmp(cname[k],cname[j])>0) k=j;
		strcpy(t,cname[i]);
		strcpy(cname[i],cname[k]);
		strcpy(cname[k],t);
	}
	for (int i=0;i<10;i++)
		cout << cname[i] << endl;
	return 0;
}
