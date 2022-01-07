#include"iostruct.h"
#include<iostream>
using namespace std;
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