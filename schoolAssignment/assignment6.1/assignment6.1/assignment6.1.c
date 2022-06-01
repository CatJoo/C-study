#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//��ٸ�-1 �⺻ ��ٸ�
	char ladder[17][17];
	int player, regame;
	srand(time(NULL));
	
	do
	{
		//��ٸ� �ʱ�ȭ
		for (int i = 0; i < 17; i++)
		{
			for (int j = 0; j < 17; j++)
			{
				ladder[i][j] = ' ';
			}
		}

		//N �Է¹ޱ�
		do
		{
			printf("�� ���� �����ϴ� ��ٸ��� �׸�����?(3 <= N <= 9)");
			scanf("%d", &player);
		} while ((player < 3) || (player > 9));

		
		//��ٸ� ������ 
		for (int i = 0; i < player; i++)
		{
			for (int j = 0; j < 17; j++)
			{
				ladder[j][i * 2] = '|';
			}
		}
	
		//��ٸ� ������
		int randNum;
		for (int i = 0; i < player - 1; i++)
		{
			for (int j = 0; j < rand() % 6 + 5; j++) //������ ��ٸ� �� 2�� �̻��� ���μ�, ���μ� ���� ���� 3 * N �̻�
			{ 
				randNum = rand() % 15 + 1;  //���� ù��° ĭ�� ������ ĭ ����
				
				if (ladder[randNum][2 * i + 1] = ' ') //ĭ�� ����ִٸ�(�ߺ� ����)
				{
					if ((2 * i + 1 == 1)) //�������� Ȧ����° ��
					{
						ladder[randNum][2 * i + 1] = '-';
					}
					//������ ��ġ�� ���μ� ����
					else if ((ladder[randNum][2 * i - 1] = ' '))
					{
						ladder[randNum][2 * i + 1] = '-';
					}
					else
					{
						j--;
					}
				}
				else
				{
					j--;
				}
			}
		}
	
		//��ٸ� ���
		for (int i = 0; i < 17; i++)
		{
			for (int j = 0; j < 17; j++)
			{
				printf("%c", ladder[i][j]);
			}
			printf("\n");
		}

		printf("20203500 �̿���\n");

		//�ٽ� �׸��� ����
		printf("��ٸ��� �ٽ� �׸����?\n��:1\n");
		scanf("%d", &regame);

	} while (regame == 1);
	
	
	return 0;
}
