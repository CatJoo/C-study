#include<stdio.h>

int main_array(void)
{
	// �迭
	//����������
	/*int subway_1 = 30; //����ö 1ȣ���� 30���� Ÿ�� �ִ�
	int subway_2 = 40;
	int subway_3 = 50;
	printf("����ö 1ȣ���� %d���� Ÿ�� �ֽ��ϴ�\n", subway_1);
	printf("����ö 2ȣ���� %d���� Ÿ�� �ֽ��ϴ�\n", subway_2);
	printf("����ö 3ȣ���� %d���� Ÿ�� �ֽ��ϴ�\n", subway_3);
	*/

	//�������� ������ �Բ�, ���ÿ� ����
	/*int subway_array[3]; //[0] [1] [2]
		subway_array[0] = 30;
		subway_array[1] = 40;
		subway_array[2] = 50;

		for (int i = 0; i < 3; i++)
		{
			printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�\n", i + 1, subway_array[i]);
		}
	*/

	// �� ���� ���
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//���� �ʱ�ȭ�� �ݵ�� �ؾ� ��
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	// �迭 ũ��� �׻� ����� ����
	/*int size = 10;
	int arr[size];
	int arr[10];
	*/

	/*int arr[10] = {1, 2}; //3��° �����ʹ� �ڵ����� '0'���� �ʱ�ȭ (��� \0�� �ƽ�Ű�ڵ� ���� ��)
						   //�ϳ��� �ʱ�ȭ�ϸ� �� ���Ĵ� �� '0'���� �ʱ�ȭ
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	//int arr[] = { 1, 2 }; // arr[2] �迭�� ũ�⸦ �������� �ʾƵ� �ʱ�ȭ�ϸ� �˾Ƽ� ��

	/*float arr_f[5] = {1.0f, 2.0f, 3.0f}; //�Ǽ����� �ʱ�ȭ���� ���� ������ ���� 0���� �ʱ�ȭ
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}
	*/

	//���� VS ���ڿ�
	//char c = 'A';
	//printf("%c\n", c);

	//���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� '\0'�� ���ԵǾ�� ��
	//char str[6] = "coding";
	//char str[7] = "coding";
	//printf("%s", str);

	//char str[] = "coding";  //���ڿ��� ��쵵 �迭�� ũ�⸦ �������� �ʾƵ� NULL���ڱ��� �����ؼ� �ʱ�ȭ ��
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));

	/*for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}
	*/

	/*char kor[] = "������ٺ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));  //size�� 11
	//���� 1���� = 1byte
	//�ѱ� 1���� = 2byte
	//char ũ�� = 1byte
	*/

	//char c_array[7] = { 'c','o','d','i','n','g','\0' };
	//char c_array[6] = { 'c','o','d','i','n','g'}; //���������� NULL���� �ڸ� �ʿ�
	//printf("%s\n", c_array);

	char c_array[10] = { 'c','o','d','i','n','g' };
	//printf("%s", c_array);
	for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]);  //printf("%d\n",c_array[i]); �ϸ� �ƽ�Ű�ڵ� ���� ���� ���
	}

	//���ڿ� �Է¹ޱ� : ������ ���� ���� ����
	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	//����: ASCII �ڵ�? ANSI (�̱� ǥ�� ��ȸ)���� ������ ǥ�� �ڵ� ü��
	//7 bit, �� 128�� �ڵ�(0 ~ 127)
	//a : 97 (���� a�� �ƽ�Ű�ڵ� ������)
	//A : 65
	//0 : 48

	/*printf("%c\n", 'a');
	printf("%d\n", 'a');

	printf("%c\n", 'b');
	printf("%d\n", 'b');

	printf("%c\n", '\0');
	printf("%d\n", '\0');
	*/

	/*����2: 0~127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��
	for (int i = 0; i < 128; i++)
	{
		printf("�ƽ�Ű�ڵ� ���� %d : %c\n", i, i);
	}
	*/
	return 0;
}