#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//if가정문으로 n의 값에 따라 경우를 나누어 생각한다.
	int shape, line;
	int i, j, k;
	int K = 1;
	printf("숫자 피라미드\n");
	printf("유형(N)과 행 수(M)을 입력하세요. (N = 1: 삼각형, N = 2: 역삼각형, N = 3: 다이아몬드, N = 4 모래시계, M <= 20)");
	scanf("%d %d", &shape, &line);
	
	//while 조건문으로 잘못된 입력을 걸러낸다.

	while ((line % 2 == 0) || (line > 20))
	{
		printf("잘못 입력하였습니다. 다시 입력하세요.");
		printf("유형(N)과 행 수(M)을 입력하세요. (N = 1: 삼각형, N = 2: 역삼각형, N = 3: 다이아몬드, N = 4 모래시계, M <= 20)");
		scanf("%d %d", &shape, &line);
	}
	//우선 줄 개수 만큼 반복하고 해당 줄을 구성할때도 반복이 필요하기에 이중 for문을 사용한다.
	//M이 19라고 가정하면 3자리 숫자가 입력될 공간이 있어야 하기에 출력시 %3d를 기준으로 한다. 비어있는 부분은 스페이스바로 간주한다.
	//줄 간에 빈공간의 차이가 커야 안정적인 모양으로 구성되기에 줄 간의 차이를 2*i+2만큼 한다. 

	//삼각형
	if (shape == 1) 
	{
		for (i = 0; i < line; i++)
		{
			for (j = 2*i+2 ; j < line*2; j++)
			{
				printf(" ");
			}

			for (k = 0; k <= i; k++)
			{
				printf("%3d", K);
				printf(" ");
				K++;
			}
			printf("\n");
		}
		printf("20203500 이영주");
	}

	//역삼각형
	else if (shape == 2)
	{
		for (i = 0; i < line; i++)
		{
			for (j = 0; j < i*2; j++)
			{
				printf(" ");
			}

			for (k = 0; k <line - i; k++)
			{
				printf("%3d", K);
				printf(" ");
				K++;
			}
			printf("\n");
		}
		printf("20203500 이영주");
	}
	//다이아몬드
	//상단부(중앙 포함) + 하단부로 나누어서 생각
	else if (shape == 3)
	{
		//상단부(중앙 포함)
		for (i = 0; i <= line / 2 ; i++) 
		{
			for (j = 2 * i ; j< (line*2)-3  ;j++)  
			{
				printf(" ");
			}
			for (k = 0; k <= i; k++)
			{
				printf("%4d", K);
				K++;
			}

			printf("\n");
		}

		//하단부
		for (i = 0; i <= line / 2; i++)
		{
			for (j=0 ; j< line + (2 * i); j++)
			{
				printf(" ");
				
			}
			for (k = i; k < line / 2; k++)
			{
				printf("%4d", K);
				K++;
			}

			printf("\n");

		}
		printf("20203500 이영주");
	}

	//모래시계
	else
	{   //상단부
		for (i = 0; i <= line / 2; i++)
		{
			for (j = 0; j < line + (2 * i); j++)
			{
				printf(" ");

			}
			for (k = i; k <= line / 2; k++)
			{
				printf("%4d", K);
				K++;
			}

			printf("\n");
		}
		for (i = 0; i < line / 2; i++)
		{
			for (j = 2 * i; j < (line * 2) - 3; j++)
			{
				printf(" ");
			}
			for (k = 0; k <= i + 1; k++)
			{
				printf("%4d", K);
				K++;
			}
			printf("\n");
		}
		printf("20203500 이영주");
	}
	
	return 0;
}