#pragma once
#include<random>
#include<ctime>
int rgb[3];
void RandomRGB(int rgb[]) {
	srand(time(0));
	int i;
	for (i = 0; i < 3; i++)
	{
		rgb[i] = rand() % 256;
	}
}
