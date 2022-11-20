// ChyrunSofialab6.2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_06_2.cpp
// < Чирун Софія >
// Лабораторна робота № 6.2.2
// Опрацювання одновимірних масивів ітераційним способом  
// Варіант 18

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
	   Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
	cout << "a[" << setw(2) << i + 1 << " ] = " << setw(4) << a[i] << endl;
	if (i < size - 1)
	   Print(a, size, i + 1);
	else
	   cout << endl;
}

int Max(int* a, const int size, int i, int max, int l)
{
    if (a[i] > max) 
	{
	   max = a[i];
	   l = i;
	}
	if (i < size - 1)
	   return Max(a, size, i + 1, max, l);
	else
	{
	   cout << "max = " << max << endl;
	   return l + 1;
	}
}

int Min(int* a, const int size, int i, int min, int l)
{
	if (a[i] < min) 
	{
	   min = a[i];
	   l = i;
	}
	if (i < size - 1)
	   return Min(a, size, i + 1, min, l);
	else
	{
	   cout << "min = " << min << endl;
	   return l + 1;
	}
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 26;
	int a[n], c, d;
	int Low = 3;
	int High = 92;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	c = Max(a, n, 1, a[0], 0);
	d = Min(a, n, 1, a[0], 0);
	cout << "imax = " << c << endl;
	cout << "imin = " << d << endl;
	cout << "imax+imin = " << c + d;
	return 0;
}

