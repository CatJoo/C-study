#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_2()
{
	//�ð� ǥ��
	int clock;
	printf("�ʸ� �Է��ϼ��� ");
	scanf("%d", &clock);
	int day = clock / 60;
	day /= 60;
	day /= 24;
	int sub_day = clock - day * 24 * 3600;

	int hour = (sub_day / 60) / 60;
	int sub_hour = sub_day - hour * 3600;

	int min = sub_hour / 60;
	int sec = sub_hour - min * 60;
	printf("%d�� %d�ð� %d�� %d��\n", day, hour, min, sec);

	printf("20203500 �̿���");


	return 0;
}