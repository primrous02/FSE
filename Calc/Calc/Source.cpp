#include <iostream>
using namespace std;

int main1() {
	int a, b, res;
	char c;
	cout << "+/- ?" << endl;
	cin >> c;
	cout << "First number" << endl;
	cin >> a;
	cout << "Second number" << endl;
	cin >> b;
	if (c == '+') {
		res = a + b;
	}
	else {
		res = a - b;
	}
	cout << "Result: " << a << c << b << " = " << res << endl;

	return 0;
}