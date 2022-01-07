//Быстрая сортировка структуры
#include<iostream>
#include<Windows.h>
#include<string>
#include<iomanip>
using namespace std;
struct strc {
	string FIO;
	int ngr;
	double sb;
	int otc[4];
};
void vvod_strc(strc mstud[], int n);
void vivod_strc(strc s[], int n);
void quick_sort(strc a[], int l, int r);
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	strc mstud[25];

	int nst;
	cout << "Введите количество студентов:";
	cin >> nst;
	cin.ignore();

	vvod_strc(mstud, nst);
	vivod_strc(mstud, nst);
	cout << endl;

	cout << "________________________________________" << endl;

	int l = 0;
	int r = nst - 1;

	quick_sort(mstud, l, r);
	vivod_strc(mstud, nst);

	system("pause");
}
void vvod_strc(strc mstud[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "Введите ФИО:";
		getline(cin, mstud[i].FIO);

		cout << "Введите номер группы:";
		cin >> mstud[i].ngr;
		cout << "Введите 4 оценки: " << endl;
		mstud[i].sb = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> mstud[i].otc[j];
			mstud[i].sb += mstud[i].otc[j] / 4.;
		}
		cin.ignore();
		cout << endl;
	}
}
void vivod_strc(strc s[], int n) {
	cout << "FiO " << setw(28) << " NGR " << setw(8) << " SB " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << s[i].FIO << setw(10)
			<< s[i].ngr << setw(10)
			<< s[i].sb << endl;
	}
}
void quick_sort(strc a[], int l, int r) {
	int i = l, j = r;
	double mid = a[(i + j) / 2].sb;
	double sb_temp;
	int ngr_temps;
	string tempFIO;
	do {
		while (a[i].sb < mid) i++;
		while (a[j].sb > mid) j--;
		if (i <= j) {
			sb_temp = a[i].sb;
			a[i].sb = a[j].sb;
			a[j].sb = sb_temp;

			ngr_temps = a[i].ngr;
			a[i].ngr = a[j].ngr;
			a[j].ngr = ngr_temps;

			tempFIO = a[i].FIO;
			a[i].FIO = a[j].FIO;
			a[j].FIO = tempFIO;

			i++;
			j--;
		}
	} while (i < j);
	if (l < j) quick_sort(a, l, j);
	if (i < r) quick_sort(a, i, r);
}