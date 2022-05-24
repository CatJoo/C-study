#include<stdio.h>
#include<stdlib.h>

void scoreNumValue(int score[30], int num[30]);
void RankValue(int score[30], int rank[30]);
void printAsNum(int num[30], int score[30], int rank[30]);
void sortAsScore(int score[30], int num[30], int rank[30]);
void printAsScore(int score[30], int num[30], int rank[30]);

int main()
{
	//����ó��
	
	srand(time(NULL));

	//30�� ����,��ȣ �迭 ����
	int score[30], num[30];

	//����, ��ȣ �迭 �ʱ�ȭ
	scoreNumValue(score, num);

	//��� �迭 ����
	int rank[30];

	//��� �迭 �ʱ�ȭ
	RankValue(score, rank);

	//��ȣ �� ���
	printAsNum(num, score, rank);

	//���� ��(��������)���� ����
	sortAsScore(score, num, rank);

	//���� �� ���
	printAsScore(score, num, rank);

	printf("\n20203500 �̿���");

	return 0;
}

void scoreNumValue(int score[30], int num[30])
{
	for (int i = 0; i < 30; i++)
	{
		score[i] = rand() % 101;  //���� �ο�
		num[i] = i + 1;   //������� ��ȣ �ο�
	}
}

void RankValue(int score[30], int rank[30])
{
	for (int i = 0; i < 30; i++)  //������ 
	{
		rank[i] = 1;  //1������ �ʱ�ȭ
		for (int j = 0; j < 30; j++) //�ϳ��ϳ� ���ư��鼭 ���ϱ�
		{
			if (score[i] < score[j])
			{
				rank[i]++;
			}
		}
	}
}

void printAsNum(int num[30], int score[30], int rank[30])
{
	printf("1)��ȣ ��\n");
	for (int i = 0; i < 30; i++)
	{
		printf("%2d��  %3d��  %2d��\n", num[i], score[i], rank[i]);
	}
}

void sortAsScore(int score[30], int num[30], int rank[30])
{
	int temp;
	for (int i = 0; i < 30; i++)
	{
		for (int j = i + 1; j < 30; j++)
		{
			if (score[i] < score[j])
			{
				//���� �������� ����
				temp = score[i];
				score[i] = score[j];
				score[j] = temp;

				//���� ���� �ٲ� �� ��ȣ�� �ٲ��ֱ�
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}

			if (rank[i] > rank[j])
			{
				//��� �������� ����
				temp = rank[i];
				rank[i] = rank[j];
				rank[j] = temp;
			}
		}
	}
}

void printAsScore(int score[30], int num[30], int rank[30])
{
	printf("\n\n2)���� ��\n");
	for (int i = 0; i < 30; i++)
	{
		printf("%2d��  %3d��  %2d��\n",rank[i], score[i], num[i]);
	}
}
