#include <stdio.h>
#include <time.h>

int getYear(int num);
int yearLeftSec(int year, int num);
int getDay(int monthLeftSec);
int dayLeftSec(int day, int monthLeftSec);
int getHour(int hourSec);
int hourLeftSec(int hour, int hourSec);
int getMinute(int hourSec);
int getSecond(int minute, int hourSec);


int main()
{
	int num = time(NULL);



	int year = getYear(num);   //연도 수 구하기
	int monthSec = yearLeftSec(year, num); //연도 수 구하고 나머지 구하기

	//달 수 구하기
	int i, day = 0, month = 0, monthLeftSec = 0;
	for (i = 1; i <= 12; i++)
	{
		if ((i <= 7) && (i % 2 == 0))
		{
			day = 30;
			if (i == 2)
			{
				day = 28;
			}
		}
		else if ((i <= 7) && (i % 2 != 0))
		{
			day = 31;
		}

		else if ((i > 7) && (i % 2 == 0))
		{
			day = 31;
		}
		else
		{
			day = 30;
		}

		monthSec = monthSec - (day * 24 * 60 * 60);
		monthLeftSec = monthSec;

		if (monthSec < 0)
		{
			month = i - 1;

			break;
		}
	}

	//일 구하기
	int day = getDay(monthLeftSec);
	//int hourSec = dayLeftSec(day, monthLeftSec);

	/*
	//시간 구하기
	int hour = getHour(hourSec);
	int minSec = hourLeftSec(hour, hourSec);

	//분, 초 구하기
	int minute = getMinute(minSec);
	int second = getSecond(minute, minSec);
	*/

	//출력
	int originYear = 1970;
	int originMonth = 1;
	int originDay = 1;
	int originHour = 0;
	int originMin = 0;
	int originSec = 0;

	originYear += year;
	originMonth += month;
	originDay += day;
	//originHour += hour;
	//originMin += minute;
	//originSec += second;

	printf("%d년 %d월 %d일 %d시 %d분 %d초", originYear, originMonth, originDay);// hour, minute, second* /

	return 0;
}

int getYear(int num)
{
	int Y;
	Y = num / (365 * 24 * 60 * 60);
	return Y;
}

int yearLeftSec(int year, int num)
{
	int Y;
	Y = num - (year * 365 * 24 * 60 * 60);
	return Y;
}

int getDay(int monthLeftSec)
{
	int Y;
	Y = monthLeftSec / (24 * 60 * 60);
	return Y;
}

int dayLeftSec(int day, int monthLeftSec)
{
	int Y;
	Y = monthLeftSec - (day * 24 * 60 * 60);
	return Y;
}

int getHour(int hourSec)
{
	int Y;
	Y = hourSec / (60 * 60);
	return Y;
}

int hourLeftSec(int hour, int hourSec)
{
	int Y;
	Y = hourSec - (hour * 60 * 60);
	return Y;
}

int getMinute(int hourSec)
{
	int Y;
	Y = hourSec / (60 * 60);
	return Y;
}

int getSecond(int minute, int minSec)
{
	int Y;
	Y = minSec - (minute * 60 * 60);
	return Y;
}
