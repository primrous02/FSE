#include <stdio.h>
using namespace std;

int main() {
	double a, b, c;
	char d;
	int p = 1;
	while (p != 2) {
		printf("1 - Calculator\n2 - Exit\n");
		scanf("%d", &p);
		if (p != 1) break;
		printf("Write expression (Without spaces!): ");
		scanf("%lf%c%lf", &a, &d, &b);
		while (getchar() != '\n');
		switch (d) {
		case '+': c = a + b; break;
		case '-': c = a - b; break;
		case '*': c = a * b; break;
		case '/': c = a / b; break;
		default:
			printf("Wrong action\n");
		}
		printf("Result: %lf\n", c);
	}
}