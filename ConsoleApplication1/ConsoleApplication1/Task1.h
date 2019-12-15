/*�������� ������ �� n=15 ������������ �����, ������������������� ���������.
������� processArray() ������ ��������� ��� �������� � ������� ��������� ��
��������� ����� �� ���������[a, b](a � b ������� � ����������, a < 0), ���������� �
������� ���������� ���������� ��������� ������� � ������������ �������� ������,
���������� ������ ���������� �������� ��������(�.�.����������� ����������).
������� �� ����� �������������� �������.*/

#pragma once
#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cmath>
#include <cstdio>//����� �

using namespace std;//������������ ���� std

 


	void printArray(double array[], size_t length)//�������  ��� �������(����������), ������ 1
	{
		for (int i = 0; i < length; i++)
		{
			printf("%.0f ", array[i]);
		}
		printf("\n");
	}

	int processArray(double array1[], double array2[], size_t length)//��� ���������, �������� (�����)
	{
		int a, b, count = 0;
		printf("������� �������� ����� �� a �� b(a < 0)\n");
		printf("������� ����� a\n");
		scanf_s("%d", &a);
		while (a >= 0)
		{
			printf("������� � ��� ���(a<0)\n");
			scanf_s("%d", &a);
		}
		printf("������� ����� b\n");
		scanf_s("%d", &b);
		while (b <= a)
		{
			printf("������� b ��� ���\n");
			scanf_s("%d", &b);
		}

		for (size_t i = 0; i < length; i++)
		{
			if (i % 2 == 0)
			{
				array1[i] = array1[i] * (double)(a + rand() % (b - a));//������ � i ������ �����, � - ��� �����, b-a - ������ �������
			}
			if (abs(array1[i]) > 9 && abs(array1[i]) < 100)
			{
				array2[count] = array1[i];//��������� ������2 ** �������
				count++;//������� ���� ������� �� �����, ���� �������� ���-�� ** ��-���
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

		int count = processArray(array1, array2, length);//���������� ���-�� ** ����� � ���������� �����
		printArray(array1, length);
		printArray(array2, length);
		printf("���-�� ����������� �����:");
		printf("%d\n", count);
	}
