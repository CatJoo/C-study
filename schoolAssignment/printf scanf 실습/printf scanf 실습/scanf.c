#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	printf("����, ����, ���� ������ ���ʷ� �Է��ϼ���.\n");
	int korean, english, math, total;
	float average;
	scanf("%d %d %d", &korean, &english, &math);
	total = korean + english + math;
	average = total / 3.0;    //������ ������ ���� ���� ������ �ν�, 3.0���� ������� �Ǽ��� ����.
	printf("����: %d  ���: %.1f", total, average);

	return 0;
}

