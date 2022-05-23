#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_printf(void)
{
	int korean = 95, math = 100, english = 99;
	int total = korean + math + english;
	printf("  국어 %3d\n", korean);
	printf("  영어 %3d\n", english);
	printf("+ 수학 %3d\n", math);
	printf("= 합계 %3d\n", total);

	return 0;
}
