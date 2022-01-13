#include<iostream>
using namespace std;
const int N = 5;
int minus_count(int i,int a[],int n) {
	int count = 0;
	if (i == n - 1) {
		if (a[i] < 0) count++;
		return count;
	}
	else {
		if (a[i] < 0) count++;
		count+=minus_count(i + 1, a, n);

	}
}
int main() {
	setlocale(LC_ALL, "rus");
	int arr[N] = {10,9,8,1,4};
	int _count = minus_count(0,arr,N);
	cout << "Кол-во отрицательных:" << _count;
	system("pause");
	return 0;
}