#include<iostream>
using namespace std;
const int N = 5;//Размер массива
//int sum(int arr[], int n) {
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += arr[i];
//	return sum;
//}
//void mas_out(int arr[], int n) {
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << " ";
//}
int sum(int i,int arr[], int n) {
	if (i == n - 1)
		return arr[i];
	else
		return arr[i] + sum(i + 1, arr, n);
}
void mas_out(int arr[],int n) {
	if (n) {
		mas_out(arr, n - 1);
		cout <<" "<< arr[n - 1];
	}

}
int main() {
	setlocale(LC_ALL, "rus");
	int array[N] = { 1,2,3,4,5 };
	//int sum_array = sum(array, N);//Нерекурсивная функция
	int sum_array = sum(0,array,N);//Рекурсивная функция

	cout << "Сумма элементов массива:" << sum_array <<endl;
	cout << "Вывод массива:\n";
	mas_out(array,N);
	cout << endl;

	system("pause");
}