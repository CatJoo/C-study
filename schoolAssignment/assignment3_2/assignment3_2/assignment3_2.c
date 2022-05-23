#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int  main()
{
	int start, end;
	printf("구구단\n");
	printf("N 단 ~ M 단 출력(최대 4단):");
	scanf("%d %d", &start, &end);

	// N > M 인 경우 거르기
	while (start > end)
	{
		printf("잘못 입력되었어요. 다시 입력하세요");
		scanf("%d %d", &start, &end);
	}
	//최대 4단 출력가능
	while (end - start >= 4)
	{
			printf("잘못 입력되었어요. 다시 입력하세요");
			scanf("%d %d", &start, &end);
	}

	//구구단 출력
	//구구단 출력부분은 10으로 설정, 10을 기준으로 빈 공간 길이 구하기
	int count = 80 - ((end - start + 1) * 10);  //길이 80을 기준으로 출력을 제외한 빈공간 길이 구하기 
	count = count /(end - start + 2);   //빈공간의 개수를 구하고 길이를 개수로 나누어서 빈공간 당 길이 구하기

		for (int i = 1; i <= 9; i++)
		{
			for (int j = start; j <= end; j++)
			{
				printf("%*d X %d = %2d", count+1, j, i, j * i);
			}
			printf("\n");
	}

		printf("20203500 이영주")
	return 0;
}
