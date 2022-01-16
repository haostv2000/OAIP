//Быстрая(рекурсивная) сортировка одномерного массива
#include <iostream>
#include<ctime>
using namespace std;
const int n = 7;
int l, r;
//функция сортировки
void quicksort(int* mas, int l, int r)
{
	int mid, temp;//Для хранения среднего эл-та и переменная для буффера
	int i = l, j = r;//СЧЕТЧИКИ ДЛЯ ЦИКЛА
	mid = mas[(i + j) / 2]; //вычисление опорного элемента
	do
	{
		while (mas[i] < mid) i++;//Пока текущий елемент меньше среднего сдвигаем i вправо
		while (mas[j] > mid) j--;//Пока текущий элемент больше среднего сдвигаем j влево
		if (i <= j) //перестановка элементов
		{
			temp = mas[i];
			mas[i] = mas[j];
			mas[j] = temp;//Поменял элементы местами
			i++;//Сдвинул счетчик
			j--;
		}
	} while (i < j);
	if (l < j) quicksort(mas, l, j);//Проверяю условие на то, что элементов больше чем один слева
	if (i < r) quicksort(mas, i, r);//Проверяю условие на то, что элементов больше чем один справа
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

