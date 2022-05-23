#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	printf("국어, 영어, 수학 점수를 차례로 입력하세요.\n");
	int korean, english, math, total;
	float average;
	scanf("%d %d %d", &korean, &english, &math);
	total = korean + english + math;
	average = total / 3.0;    //정수를 정수로 나눈 값은 정수로 인식, 3.0으로 고쳐줘야 실수로 나옴.
	printf("총점: %d  평균: %.1f", total, average);

	return 0;
}

