/*������� strncpy.
������ char* strncpy(char* dest, const char* src, size_t num).
������� �������� ������ num �������� �� ������ src � ������ dest.*/

#pragma once
#include <cstdio>//����� �
using namespace std;


char* StringCopy(char* src2, char* dest1, int num) //�������� - ��������� �� ������ ��-� �������, �.�. ��� ������
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
	char src2[] = "���� ��������, ��� ����� ������������ �������.";
	
	const int length = 50;
	
	char dest1[length];
	int num = 0;
	printf("������� ���-�� ���������� �������� (�� ����� 50)\n");
	cin >> num;
	printf("\n");
	while (num > length) 
	{
		printf("������� ����� �� ������ 50!\n");
		cin >> num;
	}

	
	


	StringCopy(src2, dest1, num);

	printf("�������� ������: ");
	printf("%s\n", src2);
	printf("������������� ����� ������: ");
	printf("%s\n", dest1);
}