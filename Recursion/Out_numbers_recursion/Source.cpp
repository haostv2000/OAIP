#include<iostream>
using namespace std;
void vivod(int n) {
	int t;
	if (n < 1)
		t = 0;
	else {
		t = n;
		vivod(n - 1);
		cout << t << endl;
	}
}
int main() {
	int n = 10;
	vivod(n);
}
