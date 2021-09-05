#include <stdio.h>
using namespace std;

int main2() {
	double a, b, c;
	char d;
	int p = 1;
	while (p != 2) {
		printf("1 - Calculator\n2 - Exit\n");
		scanf("%d", &p);
		if (p != 1) break;
		printf("Write expression (Without spaces!): ");
		scanf("%lf%c%%lf", &a, &d, &b);
	}


}