#include <stdio.h>

int main(void)
{
	//1
	/*int year = 2022;  //����� ���ÿ� ���� �ʱ�ȭ

	int credits;
	credits = 19;  //����� ������ �ʱ�ȭ

	printf("%d�⵵\n", year);
	printf("�̼�����: %d����\n", credits);

	//2
	int data1 = 20, data2 = 13;

	//���� �������� ���ʰ� �����ʿ����� ������ �ǹ� �ؼ�
	int diff = data1 - data2;
	int sum = data1 + data2;

	printf("data1: %d, data2: %d\n", data1, data2);
	printf("��: %d, ��: %d%\n", diff, sum);
	*/
	//3
	/*short sVar = 32000;  //-32767���� 32767����
	int iVar = -2140000000; //�� 21�� �������� ���� ����

	printf("���� ��: %d %d\n", sVar, iVar);

	sVar = sVar + sVar;
	iVar = iVar + iVar;

	printf("���� �� : %d %d\n", sVar, iVar);    //����, sVar�� iVar �����÷�, ����÷�
	*/

	//4
	/*float x = 3.14F;       //float x = 3.14; �� ���, ��� �߻�(��ǻ�ʹ� �Ǽ��� ���� double�� �ν�. ������ float�̴ϱ�..)
	double y = -3.141592;  //double ������� ũ��� float�� 2��
	long double z = 29.74; //double�� long double�� ��������� ��� 64��Ʈ

	printf("�ε� �Ҽ� ��: %f %f %f\n", x, y, z);

	//5
	char c1 = 'a';   //�ҹ��� a
	char c2 = 65;    //�빮�� A�� �ڵ� �� 65

	printf("���� ��(����): %c %c\n", c1, c2);
	printf("�ڵ� ��(��ȣ): %d %d\n", c1, c2);
	*/

	//6
	printf("%d, %d\n", 010, 015);  //8����
	printf("%d, %d\n", 10, 15);  //10����
	printf("%d, %d\n", 0X1a, 0x15);  //16����

	printf("%f, ", 2.71828);
	printf("%f, ", 2.71828E+2);
	printf("%f\n", 2.71828e-2);

	return 0;
}