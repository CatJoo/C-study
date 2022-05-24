#include<stdio.h>
#include<stdlib.h>

void scoreNumValue(int score[30], int num[30]);
void RankValue(int score[30], int rank[30]);
void printAsNum(int num[30], int score[30], int rank[30]);
void sortAsScore(int score[30], int num[30], int rank[30]);
void printAsScore(int score[30], int num[30], int rank[30]);

int main()
{
	//성적처리
	
	srand(time(NULL));

	//30명 성적,번호 배열 생성
	int score[30], num[30];

	//성적, 번호 배열 초기화
	scoreNumValue(score, num);

	//등수 배열 생성
	int rank[30];

	//등수 배열 초기화
	RankValue(score, rank);

	//번호 순 출력
	printAsNum(num, score, rank);

	//성적 순(내림차순)으로 정렬
	sortAsScore(score, num, rank);

	//성적 순 출력
	printAsScore(score, num, rank);

	printf("\n20203500 이영주");

	return 0;
}

void scoreNumValue(int score[30], int num[30])
{
	for (int i = 0; i < 30; i++)
	{
		score[i] = rand() % 101;  //성적 부여
		num[i] = i + 1;   //순서대로 번호 부여
	}
}

void RankValue(int score[30], int rank[30])
{
	for (int i = 0; i < 30; i++)  //기준점 
	{
		rank[i] = 1;  //1등으로 초기화
		for (int j = 0; j < 30; j++) //하나하나 돌아가면서 비교하기
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
	printf("1)번호 순\n");
	for (int i = 0; i < 30; i++)
	{
		printf("%2d번  %3d점  %2d등\n", num[i], score[i], rank[i]);
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
				//점수 내림차순 정렬
				temp = score[i];
				score[i] = score[j];
				score[j] = temp;

				//값을 서로 바꿀 때 번호도 바꿔주기
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}

			if (rank[i] > rank[j])
			{
				//등수 오름차순 정렬
				temp = rank[i];
				rank[i] = rank[j];
				rank[j] = temp;
			}
		}
	}
}

void printAsScore(int score[30], int num[30], int rank[30])
{
	printf("\n\n2)성적 순\n");
	for (int i = 0; i < 30; i++)
	{
		printf("%2d등  %3d점  %2d번\n",rank[i], score[i], num[i]);
	}
}
