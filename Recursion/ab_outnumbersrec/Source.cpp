#include<iostream>
using namespace std;
void vivod(int n, int m) {
	int t;
	if (m < n) {
		return;
	}
	else {
		t = m;
		vivod(n, m - 1);
		cout << t << endl;
	}
}
int main() {
	int n = 10;
	int m = 15;
	vivod(n, m);
}
