#include <cstdio>
int main () {
	char name[]="Russell";
	printf("Hello,I am %s.\n",name);
	printf("Hello,I am %-10s.\n",name);
	printf("Hello,I am %10.4s.\n",name);
	printf("Hello,I am %-10.4s.\n",name);
	printf("Hello,I am %10.14s.\n",name);
	printf("Hello,I am %-10.14s.\n",name);
	return 0;
}