#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_1()
{
	//����ǥ��
	int num;
	int first, second, third;

	printf("�ݾ��� �Է��ϼ��� ");
	scanf("%d", &num);

	first =(num / 1000000);
	second = (num - (first * 1000000))/1000;
	third = num - (first * 1000000 + second * 1000);
	
	printf("�Է� ���� �ݾ��� %d,%.3d,%.3d��\n", first, second, third);
	
	printf("20203500 �̿���");

	return 0;
}