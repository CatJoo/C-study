#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int printQuestion();
int checkAnswer(int answer, int userAnswer, int useTime);
void printPoint(int point);

int main()
{
	//�������� ����
	int round = 1, answer, userAnswer, point = 0, getPoint, useTime;
	srand(time(NULL));

	while (1)
	{
		printf("�������� ����. ���� ��� �� 3�� �̳��� ���� �Է��ϼ���.\n\n");
		printf("%d ���� ����\n\n", round);
		// �� ���忡 10����
		for (int i = 0; i < 10; i++)
		{
			//���� ���
			answer = printQuestion();

			//�ð� ����
			clock_t start = clock();
			scanf("%d", &userAnswer);
			clock_t end = clock();
			useTime = end - start;

			//���� üũ
			getPoint = checkAnswer(answer, userAnswer, useTime);

			//���� üũ
			point += getPoint;
			printPoint(point);
		}
		printf("\n\n%d ���� ����\n�� ���� :%4d\n", round, point);
		printf("20203500 �̿���\n\n");
		round++;
	}


	return 0;
}

int printQuestion()
{
	int x; //����
	//���� ������ ����
	int num1 = rand() % 9 + 1;
	int num2 = rand() % 9 + 1;
	printf("%d * %d = ", num1, num2);

	return x = num1 * num2;
}

int checkAnswer(int answer, int userAnswer, int useTime)
{
	int x;  //����

	if (answer == userAnswer)
	{
		if (useTime > 3000)
		{
			printf("(���ѽð��� �������ϴ�.) %4.3f�� �ҿ�: ", (double)useTime / CLOCKS_PER_SEC);
			return 0;
		}
		printf("\n(�¾ҽ��ϴ�.) %4.3f�� �ҿ�: ", (double)useTime / CLOCKS_PER_SEC);
		x = 3000 - (useTime);
		return x;
	}
	else
	{
		printf("\n(Ʋ�Ƚ��ϴ�.) %4.3f�� �ҿ�: ", (double)useTime / CLOCKS_PER_SEC);
		return 0;
	}
}

void printPoint(int point)
{
	printf("Score = %4d\n", point);
}


