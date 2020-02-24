#include <iostream>
#include "Dynamic Array.h"
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int GetSizeArr()
{
	cout << "Введите размер динамического массива: " << endl;
	int size;
	cin >> size;
	return size;
}

void DArr1()
{
	int size = GetSizeArr();
	
	double* arr = new double[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = static_cast<double>(rand() % 901 + 100) / 100.0;
	}
	cout << "Динамический массив вещественных чисел: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] <<" ";
	}

	delete[] arr;
}

void DArr2()
{
	srand(time(NULL));
	int size = GetSizeArr();
	bool* arr = new bool[size];
	for (int i = 0; i < size; i++)
	{
		int randomNum;
		randomNum = rand()% 1;
		if (randomNum == 1)
		{
			arr[i] = true;
		}
		else arr[i] = false;
	}
	cout << "Массив булевых значений: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;
}
