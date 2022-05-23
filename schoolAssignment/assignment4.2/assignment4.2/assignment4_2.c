#include <stdio.h>
#include <time.h>

int getDate(int monthLeftSec);
int dayLeftSec(int monthLeftSec);
int getHour(int hourSec);
int hourLeftSec(int hourSec);
int getMinute(int hourSec);
int getSecond(int minSec);

int main()
{
	int num = time(NULL);
	

	
	
	//윤년 구하기, 연도 구하기 
	int j, totalDay, year, yearSec;
	for (j = 1970; j < 2024; j++)
	{
		if ( ( (j % 4 == 0) && (j % 100 != 0) ) || (j % 400 == 0) )
		{
			totalDay = 366; //윤년
		}
		else
		{
			totalDay = 365; //평년
		}
		yearSec = (totalDay * 24 * 60 * 60);

		if (num - yearSec > 0)
		{
			num -= yearSec;
		}
		else 
		{
			year = j;
			break;
		}
	}

	//달 수 구하기
	int i, day = 0, month = 0, monthSec = 0;
	for (i = 1; i <= 12; i++)
	{
		if ((i <= 7) && (i % 2 == 0))
		{
			day = 30;
			if (i == 2)
			{  // 2월일 때 윤년 판단
				if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
				{
					day = 29;
				}
				else
				{
					day = 28;
				}
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
		
		monthSec = day * 24 * 60 * 60;

		if (num - monthSec > 0)
		{
			num = num - monthSec;
		}
		else  
		{
			month = i - 1;	
			break;
		}
	}
	

	//일 구하기
	int date = getDate(num);
	int hourSec = dayLeftSec(num);

	
	//시간 구하기
	int hour = getHour(hourSec);
	int minSec = hourLeftSec(hourSec);

	//분, 초 구하기
	int minute = getMinute(minSec);
	int second = getSecond(minSec);
	
	
	//출력
	int originYear = 1970;
	int originMonth = 1;
	int originDate = 1;
	int originHour = 0;
	int originMin = 0;
	int originSec = 0;
	
	originYear = year;
	originMonth += month;
	originDate += date;
	originHour += hour;
	originMin += minute;
	originSec += second;
	
	printf("%d년 %d월 %d일 %d시 %d분 %d초\n", originYear, originMonth, originDate, originHour, originMin, originSec);
	printf("\n20203500 이영주");

	return 0;
}


int getDate(int num)
{
	int Y;
	Y = num / (24 * 60 * 60);
	return Y;
}

int dayLeftSec(int num)
{
	int Y;
	Y = num %(24 * 60 * 60);
	return Y;
}

int getHour(int hourSec)
{
	int Y;
	Y = hourSec / (60 * 60);
	return Y;
}

int hourLeftSec(int hourSec)
{
	int Y;
	Y = hourSec % (60 * 60);
	return Y;
}

int getMinute(int hourSec)
{
	int Y;
	Y = hourSec / (60 * 60);
	return Y;
}

int getSecond(int minSec)
{
	int Y;
	Y = minSec % (60 * 60);
	return Y;
}
