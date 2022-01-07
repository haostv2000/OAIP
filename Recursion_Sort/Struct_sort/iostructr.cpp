#include"iostruct.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void vvod_strc(strc mstud[], int n) {
	cin.ignore();
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