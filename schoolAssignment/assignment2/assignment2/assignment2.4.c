#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//이진수 변환
	int num;
	printf("숫자는? ");
	scanf("%d", &num);
	printf("숫자 %d은 2진수 ",num);

	if (num < 0)
	{
		num++;
		num *= -1;
	
		int six = num % 2;
		num /= 2;
		int five = num % 2;
		num /= 2;
		int four = num % 2;
		num /= 2;
		int three = num % 2;
		num /= 2;
		int two = num % 2;
		num /= 2;
		int one = num % 2;

		printf("%d%d%d%d%d%d\n", !one, !two, !three, !four, !five, !six);
	}
	else
	{
			int six = num % 2;
			num /= 2;
			int five = num % 2;
			num /= 2;
			int four = num % 2;
			num /= 2;
			int three = num % 2;
			num /= 2;
			int two = num % 2;
			num /= 2;
			int one = num % 2;

			printf("%d%d%d%d%d%d\n",one, two, three, four, five, six);


	}
	printf("20203500 이영주");

	/*for (int i = 5; i >= 0; i--)
	{
		int result = num >> i & 1;
		printf("%d", result);
	}
	*/

		
	return 0;
}