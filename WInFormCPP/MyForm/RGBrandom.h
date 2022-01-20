#pragma once
#include<random>
#include<ctime>
int rgb[3];//Глобальная переменная от которой я буду получать цвет
void RandomRGB(int rgb[]) {//Функция случайного заполнения каждого элемента массива случайным числом
	srand(time(0));
	int i;
	for (i = 0; i < 3; i++)
	{
		rgb[i] = rand() % 256;
	}
}
