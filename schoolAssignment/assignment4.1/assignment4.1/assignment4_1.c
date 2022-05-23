#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double PI = 3.14;

int setMagX();
int setMagY();
double Distance(int magX, int magY, int userX, int userY);
void printAnswer(int magX, int magY, int userX, int userY, double length);
void judgeInOut(double length, double magSize, int userX, int userY);
void magStrength(double prelength, double newlength, int count);

int main()
{
	srand(time(NULL));

	double length = 0; //자기장 생성기 좌표와 사용자 입력 좌표의 사이의 거리
	double newLength = 0;  //자기장 세기 측정을 위한 새 입력 이후 좌표 사이의 거리
	double preLength = 0;  //이전 입력 좌표 사이의 거리
	int count = 0; //좌표가 두 번 이상 입력되어야 자기장 세기 측정이 가능함으로 좌표 입력횟수를 나타내는 변수 생성

	double magSize = 15;
	int magX = setMagX();   //자기장 x좌표 랜덤으로 설정하는 함수
	int magY = setMagY();   //자기장 y좌표 랜덤으로 설정하는 함수

	int userX = 0, userY = 0;

	printf("비켄디에 착륙했습니다. 자기장 생성기를 찾으세요. 자기장 크기는 %.1f입니다.\n", magSize);


	while (1)  
	{
		if (magSize == 0)
		{
			printf("자기장 찾기 실패, 게임오버\n");
			printf("\n자기장 생성기의 좌표는 (%d, %d)이었습니다.", magX, magY);
			break;
		}

		printf("\n좌표는?");
		scanf("%d %d", &userX, &userY);

		count++;
		length = Distance(magX, magY, userX, userY);  //자기장 생성기 좌표와 사용자 입력 좌표의 사이의 거리 계산

		//정답인 경우
		if (length <= 2) //두 좌표 사이의 거리 계산하는 함수
		{
			//printf("\n(%d, %d)은 자기장 안입니다. 자기장 생성기를 찾았습니다. (거리: %.1f)", userX, userY, length);
			//printf("\n자기장 생성기의 좌표는 (%d, %d)입니다. 오늘은 치킨이닭!", magX, magY);
			printAnswer(magX, magY, userX, userY, length);
			break;
		}
		else //틀린 경우
		{
			judgeInOut(length, magSize, userX, userY); //사용자 입력과 실제 자기장 위치 비교해서 밖인지 안인지 알려주는 함수

			//자기장 크기 줄이기
			magSize -=0.5;  
			printf("자기장 크기는 %.1f입니다.", magSize);

			//자기장의 세기 변화 알려주기
			newLength = length;
			magStrength(preLength, newLength, count); 
			preLength = length;

		}

	}

	printf("\n\n20203500 이영주");

	return 0;
}


int setMagX()
{
	int X = rand() % 61 + 20;      //20~80 범위
	return X;
}

int setMagY()
{
	int Y = rand() % 61 + 20;      //20~80 범위
	return Y;
}

double Distance(int magX, int magY, int userX, int userY)
{
	double distance = sqrt((magX - userX) * (magX - userX) + (magY - userY) * (magY - userY));
	return distance;
}


void printAnswer(int magX, int magY, int userX, int userY, double length)
{
	printf("\n(%d, %d)은 자기장 안입니다. 자기장 생성기를 찾았습니다. (거리: %.1f )", userX, userY, length);
	printf("\n자기장 생성기의 좌표는 (%d, %d)입니다. 오늘은 치킨이닭!", magX, magY);
}


void judgeInOut(double length, double magSize, int userX, int userY)
{
	if (length <= magSize)
	{
		printf("\n(%d, %d)는 자기장 내에 있습니다.", userX, userY);
	}
	else
	{
		printf("\n(%d, %d)는 자기장 밖에 있습니다.", userX, userY);
	}
}

void magStrength(double preLength, double newLength, int count)
{
	if (count >= 2)
	{
		if (preLength > newLength)
		{
			printf("자기장 생성기에서 가까워졌습니다\n\n");
		}
		else if (preLength < newLength)
		{ 
			printf("자기장 생성기에서 멀어졌습니다\n\n");
		}

	}

}
