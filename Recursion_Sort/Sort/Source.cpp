//Быстрая(рекурсивная) сортировка одномерного массива
#include <iostream>
#include<ctime>
using namespace std;
const int n = 7;
int l, r;
//функция сортировки
void quicksort(int* mas, int l, int r)
{
	int mid, temp;
	int i = l, j = r;
	mid = mas[(i + j) / 2]; //вычисление опорного элемента
	do
	{
		while (mas[i] < mid) i++;
		while (mas[j] > mid) j--;
		if (i <= j) //перестановка элементов
		{
			temp = mas[i];
			mas[i] = mas[j];
			mas[j] = temp;
			i++;
			j--;
		}
	} while (i < j);
	if (l < j) quicksort(mas, l, j);
	if (i < r) quicksort(mas, i, r);
}
//главная функция
int main()
{
	setlocale(LC_ALL, "Rus");
	//int* A = new int[n];
	srand(time(NULL));
	cout << "Исходный массив: ";
	int A[n] = { 1,9,8,5,-3,2,10 };
	l = 0; r = n - 1;
	quicksort(A, l, r);
	cout << endl << "Результирующий массив: ";
	for (int i = 0; i < n; i++) cout << A[i] << " ";
	//delete[]A;
	system("pause");
}



//const int N = 7;
//int mas[N]{ 4,9,7,6,2,3,8 };

//i                 j
//4, 9, 7, 6, 2, 3, 8
//l        ^        r
//
//         ij
//4, 3, 2, 6, 7, 9, 8
//l        ^        r

//p = (l + r) / 2 = (0 + 6) / 2 = 3;

