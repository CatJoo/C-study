#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//�� ����(1)-��Ģ����
	/*int num1, num2;
	printf("���� �� ���� �Է��ϼ���");
	scanf("%d %d", &num1, &num2);
	printf("%d + %d = %4d\n", num1, num2, num1 + num2);
	printf("%d - %d = %4d\n", num1, num2, num1 - num2);
	printf("%d * %d = %4d\n", num1, num2, num1 * num2);
	printf("%d / %d = %4d\n", num1, num2, num1 / num2);

	printf("20203500 �̿���\n");
	*/

	//�� ����(2)-�ܸ� ����
	/*int invest;
	double interest;
	printf("\n������ �Է��ϼ���(��).");
	scanf("%d", &invest);
	printf("\n�ݸ��� �Է��ϼ���(%%).");
	scanf("%lf", &interest);
	printf("\n���� %d�� �ݸ� %.0f%% �Դϴ�.\n", invest, interest);


	interest *= 0.01;
	double total = invest; 
	double _short, _long;

	printf("�Ⱓ       �ܸ�          ����\n");
	for (int i = 1; i <= 5; i++)
	{
		_short = invest * (1 + interest * i);
		_long = total * (1 + interest);

		printf("%d��        %.2f       %.2f\n", i,_short , _long);
		total = _long;

	}

	printf("20203500 �̿���\n");
	*/
	//�� ����(3)-�ݿø�, ����
	/*double num;
	printf("\n���ڸ� �Է��ϼ���.");
	scanf("%lf", &num);
	printf("\n\nx         = %f\n\n", num);
	printf("x(�ݿø�) = %.3f\n", num);
	
	double AnsNum;
	num *=1000;
	AnsNum = ((int)num)*0.001;
	printf("x(����)   = %.3f\n",AnsNum);
	
	printf("20203500 �̿���\n");
	*/

	//�� ����(4)-ȯ�� ����
	/*double exRate;
	int money;
	printf("\n������ ȯ��(1$)�� �� ������ �Է��ϼ���.");
	scanf("%lf", &exRate);

	for (int i = 0; i < 3; i++)
	{
		printf("\nȯ���� �ݾ��� �� ������ �Է��ϼ���.");
		scanf("%d", &money);
		printf("\n$%.2f�� ��������.\n", money / exRate);
	}
	
	printf("20203500 �̿���\n");
	*/

	//�� ����(5)-overflow
	char a = 100, b = 150;
	a = a * 2;
	b = b * 2;
	printf("%d %d\n", a, b);

	//a=-56 b=44�� �����µ�, ����ġ ���� ���� �� �ִ�. ������ char �ڷ����� ũ��� -128~127������ ǥ���� �� �ִµ� 
	//a���� 100���� �ʱ�ȭ�� ���� ������ ������ b�� 150�� �ʱ�ȭ �� ���� 127�� �ʰ��� �����÷ΰ� �߻��Ͽ���.
	//a�� 2�� ���ϸ� 200�� �ǹǷ� ���� 127�� �Ѿ�� a�� �����÷ΰ� �߻��Ͽ���.
	//b�� �̹� �����÷� �� �����̰� 150�� 2�� ���ص� ���� �����÷ΰ� �߻��ϱ⿡ a�� b��� ����ġ ���� ���� ���ִ�.
	//�� a�� b ��� �ڷ��� char�� ǥ�������� -128~127�� ������ ����� �����÷ΰ� �߻��� ����ġ ���� ���� ���� �Ǿ���.

	//��������
	int age;                //���̴� �����̱� ������ ������ �ڷ��� int�� ���� ����
	printf("����̿���?");
	scanf_s("%d", &age);    //age�� int �ڷ����̱⿡ ����� �Է��� %d �������� ���� �� �� ���� age ������ �ִ´�

	float weight;                       //�����Դ� �Ǽ��̱� ������ �Ǽ��� �ڷ��� float�� ���� ����
	printf("�����Դ� �� kg �̿���?");   
	scanf_s("%f", &weight);             //weight�� float �ڷ����̱⿡ ����� �Է��� %f �������� �ް� �� ���� weight ������ �ִ´�

	double height;                    //Ű�� �Ǽ��̱� ������ �Ǽ��� �ڷ��� double�� ���� ���� 
	printf("Ű�� �� cm �̿���?");      
	scanf_s("%lf", &height);          //height�� double �ڷ����̱� ������ %lf �������� ����ڿ��� ���� �Է¹ް� ���� height ������ �ִ´�

	printf("\n\n---�Ż� ����---\n\n");
	printf("����    : %d\n", age);          //age(int��)��� �������� ����ϱ⿡ %d�� ���
	printf("������  : %.2f\n", weight);     //weight(float��)��� �Ǽ����� ����ϱ⿡ %f�� ���, �Ҽ��� ��°�ڸ����� ��Ÿ���� ���� %.2f���
	printf("Ű      : %.2lf\n", height);    //height(double��)��� �Ǽ����� ����ϱ⿡ %lf�� ���, �Ҽ��� ��°�ڸ����� ��Ÿ���� ���� %.2lf���



	return 0;
}