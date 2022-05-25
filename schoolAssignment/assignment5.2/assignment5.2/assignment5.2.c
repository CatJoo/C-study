#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int printQuestion();
void inputNumInSquare(int num, int square[10][10]);
void inputSumInSquare(int num, int square[10][10]);
void printSquare(int num, int square[10][10]);

int main()
{
	//������ �׸���

	int num;
	int square[10][10];
	
	//���� ���
	num = printQuestion();
	
	//�迭�� �� �ֱ�
	inputNumInSquare(num, square);

	//���� �ֱ�
	inputSumInSquare(num, square);

	//������ ���
	printSquare(num, square);
	
	printf("\n20203500 �̿���");

	return 0;
}

int printQuestion()
{
	int num;
	printf("N * N ������ �׸���\nN��? (N�� 3 ~ 9 ������ Ȧ��)");
	scanf("%d", &num);

	while ((num < 3) || (num > 9) || (num % 2 == 0))
	{
		printf("\nN�� ���� �߸��Ǿ����ϴ�. �ٽ� �Է��ϼ���");
		scanf("%d", &num);
	}

	return num;
}

void inputNumInSquare(int num, int square[10][10])
{
	//ù ���� ����� �迭�� ����
	int x = 0;
	int y = num / 2;

	for (int i = 1; i <= num * num; i++)
	{
		square[x][y] = i;

		//ĭ�� �̹� ä���� �ִٸ� �ٷ� �Ʒ�ĭ�� ���´�
		if (i % num == 0) //i�� num�� ��� ���� �Ǹ� �̹� ĭ�� ä�����ִ�
		{
			x++;   //�� ĭ �ٷ� �Ʒ��� �ٲ��ش�
		}
		else
		{
			//�밢�� ������ �������� �ٲ��ش�
			x--;
			y++;
			//�迭�� ���� ����� ���� �Ʒ��ʿ� �д�
			if (x < 0)
			{
				x = num - 1;
			}
			//�迭�� �������� ����� ���� ���ʿ� ���´�.
			if (y > num - 1)
			{
				y = 0;
			}
		}
	}
}

void inputSumInSquare(int num, int square[10][10])
{
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += square[0][i];
	}
	//��
	for (int i = 0; i < num; i++)
	{
		square[i][num] = sum;

	}
	//��
	for (int i = 0; i < num; i++)
	{
		square[num][i] = sum;
	}
}

void printSquare(int num, int square[10][10])
{
	printf("\n\n\n< ������ ��� >\n");
	for (int i = 0; i <= num; i++)
	{
		for (int j = 0; j <= num; j++)
		{
			if ((i == num) && (j == num))
			{
				break;
			}
			printf("%5d", square[i][j]);
		}
		printf("\n");
	}
}

