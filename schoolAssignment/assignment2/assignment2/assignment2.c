#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_1()
{
	//숫자표시
	int num;
	int first, second, third;

	printf("금액을 입력하세요 ");
	scanf("%d", &num);

	first =(num / 1000000);
	second = (num - (first * 1000000))/1000;
	third = num - (first * 1000000 + second * 1000);
	
	printf("입력 받은 금액은 %d,%.3d,%.3d원\n", first, second, third);
	
	printf("20203500 이영주");

	return 0;
}