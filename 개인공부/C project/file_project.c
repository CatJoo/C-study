#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 10000
int main(void)
{
	//fgets, fputs Ȱ��
	char line[MAX]; // ���Ͽ��� �ҷ��� ������ ������ ����
	char contents[MAX]; // �ϱ��忡 �Է��� ����
	char password[20]; //��й�ȣ �Է�
	char c; //��й�ȣ �Է��� �� Ű�� Ȯ�ο�(����ŷ)

	printf("'����ϱ�'�� ���� ���� ȯ���մϴ�\n");
	printf("��й�ȣ�� �Է��ϼ��� :  ");

	// getchar() / getch() �� ����?
	// getchar() : ���͸� �Է¹޾ƾ� ������ �մϴ�.
	// getch() : Ű �Է½� �ٷιٷ� ������ �մϴ�.

	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13)   // Enter �� �ƽ�Ű�ڵ� ������ =13 --> ��й�ȣ �Է� ����
		{
			password[i] = '\0';
			break;
		}
		else  // ��й�ȣ �Է� ��
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	// ��й�ȣ: sheep (�ӽ�)
	printf("\n\n == ��й�ȣ Ȯ�� �� ....== \n\n");
	if (strcmp(password, "sheep") == 0)
	{
		printf("=== ��й�ȣ Ȯ�� �Ϸ� ===\n\n");

		char* filename = "secretdiary.txt";
		FILE* file = fopen(filename, "a+b");
		//������ ������ ����, ������ ������ append, �� �̾�� �Ѵ�. (�ڿ������� ������ �߰��Ѵ�)

		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n������ ��� �ۼ��ϼ���! �����Ͻ÷��� EXIT�� �Է��ϼ���\n\n");

		while (1)
		{
			scanf("%[^\n]", contents); // �� ��(\n)�� ������ ������ �о����(�� ���徿 ����)
			getchar(); //Enter �Է�(\n) FLUSH ó��

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("����ϱ⸦ �����մϴ�\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); //Enter�� ������ ���� ó�� �Ͽ����Ƿ� ���Ƿ� �߰�
		}
		fclose(file);

	}
	else
	{
		printf("===��й�ȣ�� Ʋ�Ⱦ��===\n\n");
		printf("=== �� �ڽ�! �� ������! ���� �� �ϱ�����!!!\n\n");
	}

	return 0;
}