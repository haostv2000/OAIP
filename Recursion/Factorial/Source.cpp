//Рекурсивное нахождение факториала
#include<iostream>
using namespace std;
int factorial(int n);
int main() {
	int n = 5;
	int y = factorial(n);
	cout << n << "! = " << y << endl;
	system("pause");
}
int factorial(int n) {
	int t;
	if (n <= 1)
		t = 1;
	else
		t = n * factorial(n - 1);
	return t;
}
