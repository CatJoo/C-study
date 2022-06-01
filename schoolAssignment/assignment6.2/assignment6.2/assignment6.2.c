#include <stdio.h>
#include <math.h>
#define PI 3.1416926535

void reset(char circle[20][80]);
void drawCircle(char circle[20][80], int i);
void printCircle(char circle[20][80]);

int main()
{
	//오륜기 그리기
	//배열 생성 및 초기화
	char circle[20][80];

	reset(circle);
	int i;
	for (i = 0; i < 5; i++)
	{
		drawCircle(circle, i);
		printCircle(circle);

	}

	printf("20203500 이영주");

	return 0;
}

void reset(char circle[20][80])
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			circle[i][j] = ' ';
		}
	}
}


void drawCircle(char circle[20][80], int i)
{
	int angle;
	double radian;
	int newx, newy, oldx, oldy;
	int radius;

	radius = 8;
	oldx = radius;
	oldy = 0;

	for (angle = 0; angle < 360; angle += 10)
	{
		radian = angle / 180.0 * PI;
		newx = oldx * cos(radian) - oldy * sin(radian);
		newy = oldx * sin(radian) + oldy * cos(radian);
		newx = newx + 15 + (i * 10);
		newy = newy + 8 + 8 * (i % 2);
		circle[newy][newx] = '*';
	}

}

void printCircle(char circle[20][80])
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			printf("%c", circle[i][j]);
		}
		printf("\n");
	}
}
