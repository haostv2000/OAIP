//Рекурсивный вывод чисел до заданного
#include<iostream>
using namespace std;
void vivod(int n) {
	int t;
	if (n < 1)
		return;
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
