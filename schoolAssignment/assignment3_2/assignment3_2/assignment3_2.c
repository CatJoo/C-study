#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int  main()
{
	int start, end;
	printf("������\n");
	printf("N �� ~ M �� ���(�ִ� 4��):");
	scanf("%d %d", &start, &end);

	// N > M �� ��� �Ÿ���
	while (start > end)
	{
		printf("�߸� �ԷµǾ����. �ٽ� �Է��ϼ���");
		scanf("%d %d", &start, &end);
	}
	//�ִ� 4�� ��°���
	while (end - start >= 4)
	{
			printf("�߸� �ԷµǾ����. �ٽ� �Է��ϼ���");
			scanf("%d %d", &start, &end);
	}

	//������ ���
	//������ ��ºκ��� 10���� ����, 10�� �������� �� ���� ���� ���ϱ�
	int count = 80 - ((end - start + 1) * 10);  //���� 80�� �������� ����� ������ ����� ���� ���ϱ� 
	count = count /(end - start + 2);   //������� ������ ���ϰ� ���̸� ������ ����� ����� �� ���� ���ϱ�

		for (int i = 1; i <= 9; i++)
		{
			for (int j = start; j <= end; j++)
			{
				printf("%*d X %d = %2d", count+1, j, i, j * i);
			}
			printf("\n");
	}

		printf("20203500 �̿���")
	return 0;
}
