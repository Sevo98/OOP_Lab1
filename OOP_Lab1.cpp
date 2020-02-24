#include <iostream>
#include "Algorithms and Debug.h"
#include "Arrays.h"
#include "Functions.h"
#include "Аddresses and pointers.h"
#include "Dynamic Array.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	while (true)
	{
		int number = 0;
		cout << "1. Алгоритмы и отладка" << endl;
		cout << "2. Массивы" << endl;
		cout << "3. Функции" << endl;
		cout << "4. Адреса и указатели" << endl;
		cout << "5. Динамическая память" << endl;
		cout << "0. Выход" << endl;

		cin >> number;
		switch (number)
		{
		//Алгоритмы и отладка
		case 1:
		{
			while (true)
			{
				int num = 0;
				cout << "Задание 1" << endl;
				cout << "Задание 2" << endl;

				cin >> num;
				switch (num)
				{
				case 1: Breakpoints1();
					break;
				case 2: Breakpoints2();
					break;
				}
			}
		}
		break;
		//Массивы
		case 2:
		{
			while (true)
			{
				while (true)
				{
					int num = 0;
					cout << "1. Массив на 10 элементов" << endl;
					cout << "2. Массив на 12 элементов" << endl;
					cout << "3. Массив на 8 элементов" << endl;

					cin >> num;
					switch (num)
					{
					case 1: Array1();
						break;

					case 2: Array2();
						break;

					case 3: Array3();
						break;
					}

				}
			}
		}
		break;
		//Функции
		case 3:
		{
			while (true)
			{
				int num = 0;
				cout << "Задание 1" << endl;
				cout << "Задание 2" << endl;
				cout << "Задание 3" << endl;
				cout << "Задание 4" << endl;

				cin >> num;
				switch (num)
				{
				case 1:
				{
					double base;
					int exponent;
					cout << "Введите base: ";
					cin >> base;
					cout << "\nВведите exponent: ";
					cin >> exponent;

					double getValue;
					getValue = GetPower(base, exponent);
					cout << base << " ^ " << exponent << " = " << getValue << endl;

				}
				break;
				case 2:
				{
					double base;
					int exponent;
					cout << "Введите base: ";
					cin >> base;
					cout << "\nВведите exponent: ";
					cin >> exponent;
					DemoGetPower(base, exponent);

				} break;
				case 3:
				{
					cout << "Введите округляемое значение" << endl;
					int value;
					cin >> value;
					RoundToTens(value);
				} break;
				}
			}
		}
		break;
		//Адреса и указатели
		case 4:
		{
			while (true)
			{
				int num = 0;
				cout << "Задание 1" << endl;
				cout << "Задание 2" << endl;
				cout << "Задание 3" << endl;
				cout << "Задание 4" << endl;
				cout << "Задание 5" << endl;
				cout << "Задание 6" << endl;
				cout << "Задание 7" << endl;
				cout << "Задание 8" << endl;

				cin >> num;
				switch (num)
					{
					case 1:
					{
						FirstTaskAdress();
					} break;

					case 2:
					{
						SecondTaskAdress();
					} break;

					case 3:
					{
						ThirdTaskAdress();
					} break;

					case 4:
					{
						FourthTaskAdress();
					} break;

					case 5:
					{
						FiveTaskAdress();
					} break;

					case 6:
					{
						SixTaskAdress();
					} break;

					case 7:
					{
						SevenTaskAdress();
					} break;

					case 8:
					{
						EightTaksAdress();
					} break;
				}
			}
		} break;
		case 5:
		{
			while (true)
			{
				int num = 0;
				cout << "Задание 1" << endl;
				cout << "Задание 2" << endl;
				cout << "Задание 3" << endl;
				cout << "Задание 4" << endl;
				cout << "Задание 5" << endl;
				cout << "Задание 6" << endl;
				cout << "Задание 7" << endl;
				cout << "Задание 8" << endl;

				cin >> num;
				switch (num)
				{
				case 1:
				{
					DArr1();
				} break;

				case 2:
				{
					DArr2();
				} break;
				/*
				case 3:
				{
					DArr3();
				} break;

				case 4:
				{
					DArr4();
				} break;

				case 5:
				{
					DArr5();
				} break;

				case 6:
				{
					DArr6();
				} break;

				case 7:
				{
					DArr7();
				} break;

				case 8:
				{
					DArr8();
				} break;*/
				}
			}
		}
		}
	}
}