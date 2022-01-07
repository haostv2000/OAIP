#pragma once
#include<iostream>
struct strc {
	std::string FIO;
	int ngr;
	double sb;
	int otc[4];
};
void vvod_strc(strc mstud[], int n);
void vivod_strc(strc s[], int n);
void quick_sort(strc a[], int l, int r);
