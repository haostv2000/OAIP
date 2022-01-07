//Быстрая сортировка структуры
#include<iostream>
#include<Windows.h>
#include"iostruct.h"
using namespace std;
strc mstud[25];
int nst;
int l = 0;
int r = nst - 1;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	cout << "Введите количество студентов:";
	cin >> nst;
	vvod_strc(mstud, nst);
	vivod_strc(mstud, nst);
	cout << endl;
	cout << "________________________________________" << endl;
	quick_sort(mstud, l, r);
	vivod_strc(mstud, nst);
	system("pause");
}
