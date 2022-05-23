#include <stdio.h>
#include <time.h>
// 5������ ���� �ִ�
// �ƹ�Ű�� ������ �������� ���� �̴´�
// 5���� ��� �� ������ �ؼ� ������ Ű��� �Ǵ� ����
// �ߺ��߻�����!

// ��
// �̸�, ����, ����, Ű��� ���̵� (����)

void initPets(); //�� ���� �ʱ�ȭ
void printPet(int selected);
int checkCollection();

typedef struct {
	char* name; //�̸�
	int age; //����
	char* character; //����
	int level; //Ű��� ���̵�(1-5, 5�� �����)
} PET;

int collection[5] = { 0,0,0,0,0 }; //������� ������ ��
PET animal[5]; //��ü �� ����Ʈ

int main_struct_project(void)
{
	srand(time(NULL));

	initPets();
	while (1)
	{
		printf("�αٵα�! ��� ���� Ű��� �ɱ��?\n�ƹ�Ű�� ������ Ȯ���ϼ���!\n");
		getchar();

		int selected = rand() % 5; //0 ~ 4 ������ ���� ��ȯ  
		printPet(selected); //���� �� ���� ���
		collection[selected] = 1; //�� �̱� ó��

		int collectAll = checkCollection();
		if (collectAll)
			break;
	}
	return 0;
}

void initPets()
{
	animal[0].name = "�����콱";
	animal[0].age = 5;
	animal[0].character = "�¼���";
	animal[0].level = 1;

	animal[1].name = "������ɳ���";
	animal[1].age = 8;
	animal[1].character = "��ũ��";
	animal[1].level = 2;

	animal[2].name = "������������";
	animal[2].age = 3;
	animal[2].character = "�ò�����";
	animal[2].level = 3;

	animal[3].name = "�����찳��";
	animal[3].age = 11;
	animal[3].character = "��������";
	animal[3].level = 4;

	animal[4].name = "������۸���";
	animal[4].age = 10;
	animal[4].character = "�Ϳ���";
	animal[4].level = 5;
}

void printPet(int selected)
{
	printf("\n\n=== ����� �� ���� ������ �Ǿ����! ===\n\n");
	printf("�̸� :   %s\n", animal[selected].name);
	printf("���� :   %d\n", animal[selected].age);
	printf("���� :   %s\n", animal[selected].character);
	printf("���̵� :  ");

	for (int i = 0; i < animal[selected].level; i++)
	{
		printf("��");
	}
	printf("\n\n");
}

int checkCollection()
{
	// ���� ������ �� ����� ���
	// �� ��Ҵ��� ���� ��ȯ

	int collectAll = 1;

	printf("\n\n================================ ������ �� ����̿��� ==================================\n\n");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0)  // �� ���� X
		{
			printf("%15s", "�� �ڽ�");
			collectAll = 0; // �� ������ ���� ����
		}
		else // �� ���� O
		{
			printf("%15s", animal[i].name);
		}
	}
	printf("\n=======================================================================================\n\n");

	if (collectAll)
	{
		printf("\n\n�����մϴ�! ��� ���� �� ��Ҿ��. ������ Ű���ּ���\n\n");
	}
	return collectAll;
}