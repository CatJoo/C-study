#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//if���������� n�� ���� ���� ��츦 ������ �����Ѵ�.
	int shape, line;
	int i, j, k;
	int K = 1;
	printf("���� �Ƕ�̵�\n");
	printf("����(N)�� �� ��(M)�� �Է��ϼ���. (N = 1: �ﰢ��, N = 2: ���ﰢ��, N = 3: ���̾Ƹ��, N = 4 �𷡽ð�, M <= 20)");
	scanf("%d %d", &shape, &line);
	
	//while ���ǹ����� �߸��� �Է��� �ɷ�����.

	while ((line % 2 == 0) || (line > 20))
	{
		printf("�߸� �Է��Ͽ����ϴ�. �ٽ� �Է��ϼ���.");
		printf("����(N)�� �� ��(M)�� �Է��ϼ���. (N = 1: �ﰢ��, N = 2: ���ﰢ��, N = 3: ���̾Ƹ��, N = 4 �𷡽ð�, M <= 20)");
		scanf("%d %d", &shape, &line);
	}
	//�켱 �� ���� ��ŭ �ݺ��ϰ� �ش� ���� �����Ҷ��� �ݺ��� �ʿ��ϱ⿡ ���� for���� ����Ѵ�.
	//M�� 19��� �����ϸ� 3�ڸ� ���ڰ� �Էµ� ������ �־�� �ϱ⿡ ��½� %3d�� �������� �Ѵ�. ����ִ� �κ��� �����̽��ٷ� �����Ѵ�.
	//�� ���� ������� ���̰� Ŀ�� �������� ������� �����Ǳ⿡ �� ���� ���̸� 2*i+2��ŭ �Ѵ�. 

	//�ﰢ��
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
		printf("20203500 �̿���");
	}

	//���ﰢ��
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
		printf("20203500 �̿���");
	}
	//���̾Ƹ��
	//��ܺ�(�߾� ����) + �ϴܺη� ����� ����
	else if (shape == 3)
	{
		//��ܺ�(�߾� ����)
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

		//�ϴܺ�
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
		printf("20203500 �̿���");
	}

	//�𷡽ð�
	else
	{   //��ܺ�
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
		printf("20203500 �̿���");
	}
	
	return 0;
}