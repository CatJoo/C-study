#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int* num1, int* num2);

int main()
{
	int num1, num2, num3 = 0;
	printf("두 정수를 입력하세요.");
	scanf("%d %d", &num1, &num2);
	while ((num1 == 0) && (num2 == 0))
	{
		printf("잘못된 입력입니다. 다시 입력하세요.\n");
		scanf("%d %d", &num1, &num2);
	}
	if (num1 < num2)   //num1 > num2 되도록 설정
	{
		swap(&num1, &num2);
	}
	if ((num2 == 0))
	{
		printf("최대공약수: %d\n", num1);
	}

	while (1)
	{
		if (num1 % num2 == 0)
		{
			printf("최대공약수: %d\n", num2);
			break;
		}
		else if (num1 % num2 != 0)
		{
			num1 = (num1 % num2);
			swap(&num1, &num2);
		}
	}
	
	printf("\n\n20203500 이영주");



	return 0;
}

void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}
