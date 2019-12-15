/*Преобразование: 1D -> 2D. Одномерный массив из 16 вещественных чисел необходимо
разложить по двумерной сетке 4 х 4 слева направо и сверху вниз, но первый элемент на
каждой строке должен содержать сумму остальных трех.
Инициализация: заполнить массив числами x [n] = n * exp(pi*n/100), n – индекс элемента.
Вывод на экран: на каждый элемент массива отвести 10 позиций.
*/

#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;//пространство имен std

class Task2
{

	void FreeArray2D(double** arr2D, size_t rows)
	{
		for (size_t i = 0; i < rows; i++)
		{
			delete[] arr2D[i];
		}

		delete[] arr2D;//changed line lalalalalla удаление массива
	}

	void PrintArray2D(double** arr2D, size_t rows, size_t cols)
	{
		for (size_t i = 0; i < rows; i++)
		{
			for (size_t j = 0; j < cols; j++)
			{
				cout << setw(10) << arr2D[i][j] << " "; //setw - ф-ция, задает ширину поля для вывода
			}
			cout << endl<<endl;
		}
	}

	double** CreateArray2D(double* arr1D, size_t length, size_t rows, size_t cols)
	{
		double** arr2D = new double*[rows];
		for (size_t i = 0; i < rows; i++)
		{
			arr2D[i] = new double[cols];//для каждого указателя создаем новый массив	
		}
		for (size_t i = 0; i < rows; i++)
		{

			double tmp = 0;

			for (size_t j = 0; j < cols; j++)
			{
				arr2D[i][j] = arr1D[i*cols + j];

				if (j != 0)
				{
					tmp += arr2D[i][j];
				}
			}

			arr2D[i][0] = tmp;
		}
		return arr2D;
	}

	void FreeArray1D(double* arr1D)
	{
		delete[] arr1D;
	}

	void InitializeArray1D(double* arr1D, size_t length)
	{
		for (size_t i = 0; i < length; i++)
		{
			arr1D[i] = i * exp(M_PI*i / 100);
		}

	}

	void PrintArray1D(double* arr1D, size_t length)
	{
		for (size_t i = 0; i < length; i++)
		{
			cout << arr1D[i] << " ";
		}
		cout << endl;
		cout << endl;

	}

public: void Task_2()
	{
		const size_t length = 16;
		const size_t rows = 4;
		const size_t cols = 4;
		double* arr1D = new double[length];


		InitializeArray1D(arr1D, length);
		PrintArray1D(arr1D, length);//вывод 1D



		double** arr2D = CreateArray2D(arr1D, length, rows, cols);//функция возвращает указатель arr2D на массив указателей, записывает в arr2D

		PrintArray2D(arr2D, rows, cols);

		FreeArray2D(arr2D, rows);
		FreeArray1D(arr1D);
	}
};