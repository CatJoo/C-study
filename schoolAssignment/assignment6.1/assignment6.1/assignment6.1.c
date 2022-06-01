#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//사다리-1 기본 사다리
	char ladder[17][17];
	int player, regame;
	srand(time(NULL));
	
	do
	{
		//사다리 초기화
		for (int i = 0; i < 17; i++)
		{
			for (int j = 0; j < 17; j++)
			{
				ladder[i][j] = ' ';
			}
		}

		//N 입력받기
		do
		{
			printf("몇 명이 참여하는 사다리를 그리나요?(3 <= N <= 9)");
			scanf("%d", &player);
		} while ((player < 3) || (player > 9));

		
		//사다리 세로줄 
		for (int i = 0; i < player; i++)
		{
			for (int j = 0; j < 17; j++)
			{
				ladder[j][i * 2] = '|';
			}
		}
	
		//사다리 가로줄
		int randNum;
		for (int i = 0; i < player - 1; i++)
		{
			for (int j = 0; j < rand() % 6 + 5; j++) //인접한 사다리 간 2개 이상의 가로선, 가로선 개수 총합 3 * N 이상
			{ 
				randNum = rand() % 15 + 1;  //열의 첫번째 칸과 마지막 칸 제외
				
				if (ladder[randNum][2 * i + 1] = ' ') //칸이 비어있다면(중복 제거)
				{
					if ((2 * i + 1 == 1)) //가로줄은 홀수번째 열
					{
						ladder[randNum][2 * i + 1] = '-';
					}
					//동일한 위치의 가로선 배제
					else if ((ladder[randNum][2 * i - 1] = ' '))
					{
						ladder[randNum][2 * i + 1] = '-';
					}
					else
					{
						j--;
					}
				}
				else
				{
					j--;
				}
			}
		}
	
		//사다리 출력
		for (int i = 0; i < 17; i++)
		{
			for (int j = 0; j < 17; j++)
			{
				printf("%c", ladder[i][j]);
			}
			printf("\n");
		}

		printf("20203500 이영주\n");

		//다시 그릴지 말지
		printf("사다리를 다시 그릴까요?\n예:1\n");
		scanf("%d", &regame);

	} while (regame == 1);
	
	
	return 0;
}
