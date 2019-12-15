/*Объявить массив из n=15 вещественных чисел, проинициализировать единицами.
Функция processArray() должна домножить все элементы с четными индексами на
случайное число из диапазона[a, b](a и b введите с клавиатуры, a < 0), подсчитать и
вернуть количество двузначных элементов массива и сформировать выходной массив,
содержащий только двузначные элементы входного(т.е.размерность уменьшится).
Вывести на экран результирующие массивы.*/

#pragma once
#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cmath>
#include <cstdio>//вывод С

using namespace std;//пространство имен std

 


	void printArray(double array[], size_t length)//выводит  два массива(поочередно), вместо 1
	{
		for (int i = 0; i < length; i++)
		{
			printf("%.0f ", array[i]);
		}
		printf("\n");
	}

	int processArray(double array1[], double array2[], size_t length)//что принимает, параметр (длины)
	{
		int a, b, count = 0;
		printf("Введите диапазон чисел от a до b(a < 0)\n");
		printf("Введите число a\n");
		scanf_s("%d", &a);
		while (a >= 0)
		{
			printf("Введите а еще раз(a<0)\n");
			scanf_s("%d", &a);
		}
		printf("Введите число b\n");
		scanf_s("%d", &b);
		while (b <= a)
		{
			printf("Введите b еще раз\n");
			scanf_s("%d", &b);
		}

		for (size_t i = 0; i < length; i++)
		{
			if (i % 2 == 0)
			{
				array1[i] = array1[i] * (double)(a + rand() % (b - a));//запись в i нового числа, а - мин число, b-a - ширина выборки
			}
			if (abs(array1[i]) > 9 && abs(array1[i]) < 100)
			{
				array2[count] = array1[i];//заполнили массив2 ** числами
				count++;//выведем этот счетчик на экран, чтоб показать кол-во ** эл-тов
			}
		}
		return count;
	}
 void Task_1()
	{
		const size_t length = 15;
		double array1[length];
		double array2[length] = { 0.0 };
		for (int i = 0; i < length; i++)
		{
			array1[i] = 1.0;
		}

		srand(time(0));

		int count = processArray(array1, array2, length);//засовываем кол-во ** чисел в переменную каунт
		printArray(array1, length);
		printArray(array2, length);
		printf("Кол-во двухзначных чисел:");
		printf("%d\n", count);
	}
