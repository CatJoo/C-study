#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_printf(void)
{
	int korean = 95, math = 100, english = 99;
	int total = korean + math + english;
	printf("  ���� %3d\n", korean);
	printf("  ���� %3d\n", english);
	printf("+ ���� %3d\n", math);
	printf("= �հ� %3d\n", total);

	return 0;
}
