/*Функция strncpy.
Формат char* strncpy(char* dest, const char* src, size_t num).
Функция копирует первые num символов из строки src в строку dest.*/

#pragma once
#include <cstdio>//вывод С
using namespace std;


char* StringCopy(char* src2, char* dest1, int num) //параметр - указатель на первый эл-т массива, т.е. сам массив
{
	size_t i = 0;
	while ( i < num)
	{
		dest1[i] = src2[i];
		i++;
	}
	dest1[i] = '\0';
	
	return dest1;
}

void Task_3()
{
	char src2[] = "щито поделать, это самая обыкновенная строчка.";
	
	const int length = 50;
	
	char dest1[length];
	int num = 0;
	printf("Введите кол-во копируемых символов (не более 50)\n");
	cin >> num;
	printf("\n");
	while (num > length) 
	{
		printf("Введите число не больше 50!\n");
		cin >> num;
	}

	
	


	StringCopy(src2, dest1, num);

	printf("Исходная строка: ");
	printf("%s\n", src2);
	printf("Скопированная часть строки: ");
	printf("%s\n", dest1);
}