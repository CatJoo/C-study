#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int printQuestion();
int checkAnswer(int answer, int userAnswer, int useTime);
void printPoint(int point);

int main()
{
	//구구단을 외자
	int round = 1, answer, userAnswer, point = 0, getPoint, useTime;
	srand(time(NULL));

	while (1)
	{
		printf("구구단을 외자. 문제 출력 후 3초 이내에 답을 입력하세요.\n\n");
		printf("%d 라운드 시작\n\n", round);
		// 한 라운드에 10문제
		for (int i = 0; i < 10; i++)
		{
			//문제 출력
			answer = printQuestion();

			//시간 측정
			clock_t start = clock();
			scanf("%d", &userAnswer);
			clock_t end = clock();
			useTime = end - start;

			//정답 체크
			getPoint = checkAnswer(answer, userAnswer, useTime);

			//점수 체크
			point += getPoint;
			printPoint(point);
		}
		printf("\n\n%d 라운드 종료\n총 점수 :%4d\n", round, point);
		printf("20203500 이영주\n\n");
		round++;
	}


	return 0;
}

int printQuestion()
{
	int x; //정답
	//랜덤 구구단 생성
	int num1 = rand() % 9 + 1;
	int num2 = rand() % 9 + 1;
	printf("%d * %d = ", num1, num2);

	return x = num1 * num2;
}

int checkAnswer(int answer, int userAnswer, int useTime)
{
	int x;  //점수

	if (answer == userAnswer)
	{
		if (useTime > 3000)
		{
			printf("(제한시간이 지났습니다.) %4.3f초 소요: ", (double)useTime / CLOCKS_PER_SEC);
			return 0;
		}
		printf("\n(맞았습니다.) %4.3f초 소요: ", (double)useTime / CLOCKS_PER_SEC);
		x = 3000 - (useTime);
		return x;
	}
	else
	{
		printf("\n(틀렸습니다.) %4.3f초 소요: ", (double)useTime / CLOCKS_PER_SEC);
		return 0;
	}
}

void printPoint(int point)
{
	printf("Score = %4d\n", point);
}


