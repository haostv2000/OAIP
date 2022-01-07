//�������(�����������) ���������� ����������� �������
#include <iostream>
#include<ctime>
using namespace std;
const int n = 7;
int l, r;
//������� ����������
void quicksort(int* mas, int l, int r)
{
	int mid, count;
	int i = l, j = r;
	mid = mas[(i + j) / 2]; //���������� �������� ��������
	do
	{
		while (mas[i] < mid) i++;
		while (mas[j] > mid) j--;
		if (i <= j) //������������ ���������
		{
			count = mas[i];
			mas[i] = mas[j];
			mas[j] = count;
			i++;
			j--;
		}
	} while (i < j);
	if (l < j) quicksort(mas, l, j);
	if (i < r) quicksort(mas, i, r);
}
//������� �������
void main()
{
	setlocale(LC_ALL, "Rus");
	int* A = new int[n];
	srand(time(NULL));
	cout << "�������� ������: ";
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 10;
		cout << A[i] << " ";
	}
	l = 0; r = n - 1;
	quicksort(A, l, r);
	cout << endl << "�������������� ������: ";
	for (int i = 0; i < n; i++) cout << A[i] << " ";
	delete[]A;
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

