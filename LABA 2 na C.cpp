#include<stdio.h>
#include<locale.h>
#include<conio.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 7;                           // ���������� ��������� �������
	int m[n] = { 4, 6, 6, 7, -8, 9,10 };     // ���������� ��� �������� �������
	int sum = 0;                               // ���������� ��� �������� ����� ������������� ���������
	int sum2 = 0;                              // ���������� ��� �������� ����� ������������� ���������
	int i = 0;


	
	// ������� ����� ������������� ��������� �������
	for (int i = 0; i < n; i++)
		if (m[i] < 0)
			sum += m[i];
	printf("\n����� ������������� ��������� = %d", sum);


	// ������� ����� ������������� ���������, ������� ����� ��������������
	for (int i = 0; i < n; i++)
		if (m[i] > 0)
			sum2 += m[i];
	printf("\n����� �������������  ��������� = %d", sum2);



	return (0);

}