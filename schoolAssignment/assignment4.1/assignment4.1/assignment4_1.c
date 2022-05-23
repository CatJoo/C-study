#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double PI = 3.14;

int setMagX();
int setMagY();
double Distance(int magX, int magY, int userX, int userY);
void printAnswer(int magX, int magY, int userX, int userY, double length);
void judgeInOut(double length, double magSize, int userX, int userY);
void magStrength(double prelength, double newlength, int count);

int main()
{
	srand(time(NULL));

	double length = 0; //�ڱ��� ������ ��ǥ�� ����� �Է� ��ǥ�� ������ �Ÿ�
	double newLength = 0;  //�ڱ��� ���� ������ ���� �� �Է� ���� ��ǥ ������ �Ÿ�
	double preLength = 0;  //���� �Է� ��ǥ ������ �Ÿ�
	int count = 0; //��ǥ�� �� �� �̻� �ԷµǾ�� �ڱ��� ���� ������ ���������� ��ǥ �Է�Ƚ���� ��Ÿ���� ���� ����

	double magSize = 15;
	int magX = setMagX();   //�ڱ��� x��ǥ �������� �����ϴ� �Լ�
	int magY = setMagY();   //�ڱ��� y��ǥ �������� �����ϴ� �Լ�

	int userX = 0, userY = 0;

	printf("���˵� �����߽��ϴ�. �ڱ��� �����⸦ ã������. �ڱ��� ũ��� %.1f�Դϴ�.\n", magSize);


	while (1)  
	{
		if (magSize == 0)
		{
			printf("�ڱ��� ã�� ����, ���ӿ���\n");
			printf("\n�ڱ��� �������� ��ǥ�� (%d, %d)�̾����ϴ�.", magX, magY);
			break;
		}

		printf("\n��ǥ��?");
		scanf("%d %d", &userX, &userY);

		count++;
		length = Distance(magX, magY, userX, userY);  //�ڱ��� ������ ��ǥ�� ����� �Է� ��ǥ�� ������ �Ÿ� ���

		//������ ���
		if (length <= 2) //�� ��ǥ ������ �Ÿ� ����ϴ� �Լ�
		{
			//printf("\n(%d, %d)�� �ڱ��� ���Դϴ�. �ڱ��� �����⸦ ã�ҽ��ϴ�. (�Ÿ�: %.1f)", userX, userY, length);
			//printf("\n�ڱ��� �������� ��ǥ�� (%d, %d)�Դϴ�. ������ ġŲ�̴�!", magX, magY);
			printAnswer(magX, magY, userX, userY, length);
			break;
		}
		else //Ʋ�� ���
		{
			judgeInOut(length, magSize, userX, userY); //����� �Է°� ���� �ڱ��� ��ġ ���ؼ� ������ ������ �˷��ִ� �Լ�

			//�ڱ��� ũ�� ���̱�
			magSize -=0.5;  
			printf("�ڱ��� ũ��� %.1f�Դϴ�.", magSize);

			//�ڱ����� ���� ��ȭ �˷��ֱ�
			newLength = length;
			magStrength(preLength, newLength, count); 
			preLength = length;

		}

	}

	printf("\n\n20203500 �̿���");

	return 0;
}


int setMagX()
{
	int X = rand() % 61 + 20;      //20~80 ����
	return X;
}

int setMagY()
{
	int Y = rand() % 61 + 20;      //20~80 ����
	return Y;
}

double Distance(int magX, int magY, int userX, int userY)
{
	double distance = sqrt((magX - userX) * (magX - userX) + (magY - userY) * (magY - userY));
	return distance;
}


void printAnswer(int magX, int magY, int userX, int userY, double length)
{
	printf("\n(%d, %d)�� �ڱ��� ���Դϴ�. �ڱ��� �����⸦ ã�ҽ��ϴ�. (�Ÿ�: %.1f )", userX, userY, length);
	printf("\n�ڱ��� �������� ��ǥ�� (%d, %d)�Դϴ�. ������ ġŲ�̴�!", magX, magY);
}


void judgeInOut(double length, double magSize, int userX, int userY)
{
	if (length <= magSize)
	{
		printf("\n(%d, %d)�� �ڱ��� ���� �ֽ��ϴ�.", userX, userY);
	}
	else
	{
		printf("\n(%d, %d)�� �ڱ��� �ۿ� �ֽ��ϴ�.", userX, userY);
	}
}

void magStrength(double preLength, double newLength, int count)
{
	if (count >= 2)
	{
		if (preLength > newLength)
		{
			printf("�ڱ��� �����⿡�� ����������ϴ�\n\n");
		}
		else if (preLength < newLength)
		{ 
			printf("�ڱ��� �����⿡�� �־������ϴ�\n\n");
		}

	}

}
