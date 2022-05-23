#include <stdio.h>

int main_1()
{
	//실습
	int math = 95;
	int english = 100;
	int korean = 99;
	int total = math + english + korean;
	printf("수학: %d ", math);
	printf("영어: %d ", english);
	printf("국어: %d\n", korean);
	printf("총점: %d\n", total);

	//실습
	const double PI = 3.1415926535;
	float radius = 5.4;
	double area = radius * radius * PI;
	printf("원의 면적: %f\n", area);

    //실습
	long long answer;
	answer = 256LL * 256LL * 256LL * 256LL;
	printf("%lld\n", answer);

	double var = 0.1;
	printf("%.20f\n", var);

	double answer1;
	answer1 = 1e15 * 1e-10;
	printf("%f\n", answer1);
}