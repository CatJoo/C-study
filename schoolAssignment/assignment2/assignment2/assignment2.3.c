#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_3()
{
	//���� ȭ��
	//F = 1.8 * C + 32
	//C = (F - 32) /1.8
	
	double temp;
	printf("�µ��� �Է��ϼ��� ");
	scanf("%lf", &temp);
	double celsius = (temp - 32) /1.8;
	double fahrenheit = 1.8 * temp + 32;
	printf("���� %.1f���� ȭ�� %.1f�� �Դϴ�.\n", temp, fahrenheit);
	printf("ȭ�� %.1f���� ���� %.1f�� �Դϴ�.\n", temp, celsius);
	
	printf("20203500 �̿���");


	return 0;
}