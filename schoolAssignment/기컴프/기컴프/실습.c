#include <stdio.h>

int main_1()
{
	//�ǽ�
	int math = 95;
	int english = 100;
	int korean = 99;
	int total = math + english + korean;
	printf("����: %d ", math);
	printf("����: %d ", english);
	printf("����: %d\n", korean);
	printf("����: %d\n", total);

	//�ǽ�
	const double PI = 3.1415926535;
	float radius = 5.4;
	double area = radius * radius * PI;
	printf("���� ����: %f\n", area);

    //�ǽ�
	long long answer;
	answer = 256LL * 256LL * 256LL * 256LL;
	printf("%lld\n", answer);

	double var = 0.1;
	printf("%.20f\n", var);

	double answer1;
	answer1 = 1e15 * 1e-10;
	printf("%f\n", answer1);
}