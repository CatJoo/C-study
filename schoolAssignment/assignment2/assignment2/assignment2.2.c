#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_2()
{
	//시간 표시
	int clock;
	printf("초를 입력하세요 ");
	scanf("%d", &clock);
	int day = clock / 60;
	day /= 60;
	day /= 24;
	int sub_day = clock - day * 24 * 3600;

	int hour = (sub_day / 60) / 60;
	int sub_hour = sub_day - hour * 3600;

	int min = sub_hour / 60;
	int sec = sub_hour - min * 60;
	printf("%d일 %d시간 %d분 %d초\n", day, hour, min, sec);

	printf("20203500 이영주");


	return 0;
}