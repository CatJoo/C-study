#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int com, player;
	int win = 0;
	int lost = 0;
	printf("���������� ����\n\n");
	printf("��ǻ��: %d�� %d��,  ���: %d�� %d��\n", lost, win, win, lost);

	srand(time(NULL));

	while ( (win < 3) && ( lost < 3) )
	{
		i++;
		printf("\n\n���� %d\n\n", i );
		com = rand() % 3;
		printf("��ǻ�Ͱ� �����߽��ϴ�.\n");
		printf("������ ���ðڽ��ϱ�? (����:0, ����:1, ��:2)");
		scanf("%d", &player);

		//�߸��� �Է�(0,1,2 �̿�) �Ÿ���
		while((player < 0) || (player > 2))
		{
			printf("\n�߸��� �����Դϴ�. �ٽ� �Է��ϼ���.\n");
			printf("������ ���ðڽ��ϱ�? (����:0, ����:1, ��:2)");
			scanf("%d", &player);
		}

		//���� ���(��� ���)
		if (com == player)
		{
			printf("�����ϴ�.\n");
		}

		//�ٸ� ���
		else
		{
			if (com == 0)  // com�� 0�̸� ������ �Ǵ�
			{
				if (player == 1)
				{
					printf("��ǻ�ʹ� ����, ����� ����, ����� �̰���ϴ�.\n");
					win++;
					printf("��ǻ��: %d�� %d��,  ���: %d�� %d��\n", lost, win, win, lost);
				}
				else
				{
					printf("��ǻ�ʹ� ����, ����� ��, ��ǻ�Ͱ� �̰���ϴ�.\n");
					lost++;
					printf("��ǻ��: %d�� %d��,  ���: %d�� %d��\n", lost, win, win, lost);
				}
			}

			else if (com == 1) // com�� 1�̸� ������ �Ǵ�
			{
				if (player == 0)
				{
					printf("��ǻ�ʹ� ����, ����� ����, ��ǻ�Ͱ� �̰���ϴ�.\n");
					lost++;
					printf("��ǻ��: %d�� %d��,  ���: %d�� %d��\n", lost, win, win, lost);
				}
				else
				{
					printf("��ǻ�ʹ� ����, ����� ��, ����� �̰���ϴ�.\n");
					win++;
					printf("��ǻ��: %d�� %d��,  ���: %d�� %d��\n", lost, win, win, lost);
				}
			}

			else if (com == 2) // com�� 2�� ���� �Ǵ�
			{
				if (player == 0)
				{
					printf("��ǻ�ʹ� ��, ����� ����, ����� �̰���ϴ�.\n");
					win++;
					printf("��ǻ��: %d�� %d��,  ���: %d�� %d��", lost, win, win, lost);
				}
				else
				{
					printf("��ǻ�ʹ� ��, ����� ����, ��ǻ�Ͱ� �̰���ϴ�.\n");
					lost++;
					printf("��ǻ��: %d�� %d��,  ���: %d�� %d��\n", lost, win, win, lost);
				}
			}

		}

	}

	//������ �¸� �Ǵ�
	if (win == 3)
	{
		printf("\n����� �����¸�\n");
	}
	else
	{
		printf("\n��ǻ���� �����¸�\n");
	}

	printf("20203500 �̿���");

	return 0;
}