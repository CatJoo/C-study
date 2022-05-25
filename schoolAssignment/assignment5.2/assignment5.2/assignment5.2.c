#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int printQuestion();
void inputNumInSquare(int num, int square[10][10]);
void inputSumInSquare(int num, int square[10][10]);
void printSquare(int num, int square[10][10]);

int main()
{
	//마방진 그리기

	int num;
	int square[10][10];
	
	//문제 출력
	num = printQuestion();
	
	//배열에 값 넣기
	inputNumInSquare(num, square);

	//총합 넣기
	inputSumInSquare(num, square);

	//마방진 출력
	printSquare(num, square);
	
	printf("\n20203500 이영주");

	return 0;
}

int printQuestion()
{
	int num;
	printf("N * N 마방진 그리기\nN은? (N은 3 ~ 9 사이의 홀수)");
	scanf("%d", &num);

	while ((num < 3) || (num > 9) || (num % 2 == 0))
	{
		printf("\nN의 값이 잘못되었습니다. 다시 입력하세요");
		scanf("%d", &num);
	}

	return num;
}

void inputNumInSquare(int num, int square[10][10])
{
	//첫 행의 정가운데 배열로 시작
	int x = 0;
	int y = num / 2;

	for (int i = 1; i <= num * num; i++)
	{
		square[x][y] = i;

		//칸이 이미 채워져 있다면 바로 아래칸에 놓는다
		if (i % num == 0) //i가 num의 배수 값이 되면 이미 칸이 채워져있다
		{
			x++;   //한 칸 바로 아래로 바꿔준다
		}
		else
		{
			//대각선 오른쪽 위쪽으로 바꿔준다
			x--;
			y++;
			//배열의 위를 벗어나면 가장 아래쪽에 둔다
			if (x < 0)
			{
				x = num - 1;
			}
			//배열의 오른쪽을 벗어나면 가장 왼쪽에 놓는다.
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
	//열
	for (int i = 0; i < num; i++)
	{
		square[i][num] = sum;

	}
	//행
	for (int i = 0; i < num; i++)
	{
		square[num][i] = sum;
	}
}

void printSquare(int num, int square[10][10])
{
	printf("\n\n\n< 마방진 출력 >\n");
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

