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



	int year = getYear(num);   //���� �� ���ϱ�
	int monthSec = yearLeftSec(year, num); //���� �� ���ϰ� ������ ���ϱ�

	//�� �� ���ϱ�
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

	//�� ���ϱ�
	int day = getDay(monthLeftSec);
	//int hourSec = dayLeftSec(day, monthLeftSec);

	/*
	//�ð� ���ϱ�
	int hour = getHour(hourSec);
	int minSec = hourLeftSec(hour, hourSec);

	//��, �� ���ϱ�
	int minute = getMinute(minSec);
	int second = getSecond(minute, minSec);
	*/

	//���
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

	printf("%d�� %d�� %d�� %d�� %d�� %d��", originYear, originMonth, originDay);// hour, minute, second* /

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
