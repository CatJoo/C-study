#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int* num1, int* num2);

int main()
{
	int num1, num2, num3 = 0;
	printf("�� ������ �Է��ϼ���.");
	scanf("%d %d", &num1, &num2);
	while ((num1 == 0) && (num2 == 0))
	{
		printf("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.\n");
		scanf("%d %d", &num1, &num2);
	}
	if (num1 < num2)   //num1 > num2 �ǵ��� ����
	{
		swap(&num1, &num2);
	}
	if ((num2 == 0))
	{
		printf("�ִ�����: %d\n", num1);
	}

	while (1)
	{
		if (num1 % num2 == 0)
		{
			printf("�ִ�����: %d\n", num2);
			break;
		}
		else if (num1 % num2 != 0)
		{
			num1 = (num1 % num2);
			swap(&num1, &num2);
		}
	}
	
	printf("\n\n20203500 �̿���");



	return 0;
}

void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}
