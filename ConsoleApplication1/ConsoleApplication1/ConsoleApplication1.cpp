
#include "pch.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cmath>
#include <Task1.h>
#include <Task2.h>
#include <Task3.h>

using namespace std;//пространство имен std



int main()//вотьвавававааавав
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	cout << "Введите номер задания (от 1 до 3) или 0, чтобы выйти" << endl;
	int N = 0;
	
	cin >> N;
	cout << endl;

	while (N != 0)
	{                                             	
		switch (N)
		{
		case 1: Task_1();
			break;
		case 2: Task2 Task_2;
			Task_2.Task_2();
			break;
		case 3: Task_3();
			break;


		}

		cout << endl;
		cout << "Введите номер задания от 1 до 3" << endl;
		cin >> N;
		
		cout << endl;
	}

	//system("pause");
}

