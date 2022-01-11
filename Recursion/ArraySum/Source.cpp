#include<iostream>
using namespace std;
const int N = 5;
//int sum(int arr[], int n) {
//	int sum=0;
//	for (int i = 0; i < n; i++)
//		sum += arr[i];
//	return sum;
//}
int sum(int i,int arr[], int n) {
	if (i == n - 1)
		return arr[i];
	else
		return arr[i] + sum(i + 1, arr, n);
}
int main() {
	setlocale(LC_ALL, "rus");
	int array[N] = { 1,2,3,4,5 };
	int sum_array = sum(0,array,N);
	cout << "Сумма элементов массива:" << sum_array<<endl;
	system("pause");
}