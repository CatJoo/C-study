#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;  ///���� ��ü ����
};

typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO;

typedef struct {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO;

int main_struct(void)
{
	//[���� ���]
	//�̸�: ������ٺ�
	//�߸ų⵵: 2022��
	//����: 50��
	//���ۻ�: �̿���õ��

	char* name = "������ٺ�";
	int year = 2022;
	int price = 50;
	char* company = "�̿��� õ��";

	//[���� ���]
	//�̸�: �������û��
	//�߸ų⵵: 2022��
	//����: 100��
	//���ۻ�: �̿��ֶȶ���

	char* name2 = "�������û��";
	int year2 = 2022;
	int price2 = 100;
	char* company2 = "�̿��ֶȶ���";

	//����ü ���
	struct GameInfo gameInfo1;
	//struct GameInfo gameInfo2;
	gameInfo1.name = "������ٺ�";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "�̿���õ��";

	//����ü ���
	printf("---���� ��� ����---\n\n");
	printf("���Ӹ�    :    %s\n", gameInfo1.name);
	printf("�߸ų⵵  :    %d\n", gameInfo1.year);
	printf("����      :    %d\n", gameInfo1.price);
	printf("���ۻ�    :    %s\n", gameInfo1.company);

	//����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = { "�������û��", 2022, 100,"�̿��ֶȶ���" };
	printf("---�� �ٸ� ���� ��� ����---\n\n");
	printf("���Ӹ�    :    %s\n", gameInfo2.name);
	printf("�߸ų⵵  :    %d\n", gameInfo2.year);
	printf("����      :    %d\n", gameInfo2.price);
	printf("���ۻ�    :    %s\n", gameInfo2.company);

	//����ü �迭
	struct GameInfo gameArray[2] = {
		{"������ٺ�", 2022, 50,"�̿���õ��"},
		{"�������û��", 2022, 100,"�̿��ֶȶ���"}
	};

	//����ü ������
	struct GameInfo* gamePtr; //�̼Ǹ�
	gamePtr = &gameInfo1;
	printf("\n\n--�̼Ǹ��� ���� ��� ����--\n");
	printf("���Ӹ�    :    %s\n", (*gamePtr).name);
	printf("�߸ų⵵  :    %d\n", (*gamePtr).year);
	printf("����      :    %d\n", (*gamePtr).price);
	printf("���ۻ�    :    %s\n", (*gamePtr).company);

	printf("���Ӹ�    :    %s\n", gamePtr->name);
	printf("�߸ų⵵  :    %d\n", gamePtr->year);
	printf("����      :    %d\n", gamePtr->price);
	printf("���ۻ�    :    %s\n", gamePtr->company);

	//���� ��ü �Ұ�(����ü ���� ����ü)
	gameInfo1.friendGame = &gameInfo2;              // ����..? �̷��� ���� ������ ����
	printf("\n\n--������ü�� ���� ��� ����--\n");
	printf("���Ӹ�    :    %s\n", gameInfo1.friendGame->name);
	printf("�߸ų⵵  :    %d\n", gameInfo1.friendGame->year);
	printf("����      :    %d\n", gameInfo1.friendGame->price);
	printf("���ۻ�    :    %s\n", gameInfo1.friendGame->company);

	//typedef
	//�ڷ����� ���� ����
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3;  //int i = 3;
	�Ǽ� �Ǽ����� = 3.23f;  //float f = 3.23f;
	printf("\n\n�������� : %d, �Ǽ����� : %.2f\n\n", ��������, �Ǽ�����);

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "������ sheep";
	game1.year = 2022;

	GAME_INFO game2;
	game2.name = "������ sheep2";
	game2.year = 2022;

	struct GameInformation game3;
	game3.name = "������ sheep3";
	game3.year = 2022;


	return 0;
}