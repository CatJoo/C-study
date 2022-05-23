#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//본 과제(1)-사칙연산
	/*int num1, num2;
	printf("정수 두 개를 입력하세요");
	scanf("%d %d", &num1, &num2);
	printf("%d + %d = %4d\n", num1, num2, num1 + num2);
	printf("%d - %d = %4d\n", num1, num2, num1 - num2);
	printf("%d * %d = %4d\n", num1, num2, num1 * num2);
	printf("%d / %d = %4d\n", num1, num2, num1 / num2);

	printf("20203500 이영주\n");
	*/

	//본 과제(2)-단리 복리
	/*int invest;
	double interest;
	printf("\n원금을 입력하세요(원).");
	scanf("%d", &invest);
	printf("\n금리를 입력하세요(%%).");
	scanf("%lf", &interest);
	printf("\n원금 %d원 금리 %.0f%% 입니다.\n", invest, interest);


	interest *= 0.01;
	double total = invest; 
	double _short, _long;

	printf("기간       단리          복리\n");
	for (int i = 1; i <= 5; i++)
	{
		_short = invest * (1 + interest * i);
		_long = total * (1 + interest);

		printf("%d년        %.2f       %.2f\n", i,_short , _long);
		total = _long;

	}

	printf("20203500 이영주\n");
	*/
	//본 과제(3)-반올림, 내림
	/*double num;
	printf("\n숫자를 입력하세요.");
	scanf("%lf", &num);
	printf("\n\nx         = %f\n\n", num);
	printf("x(반올림) = %.3f\n", num);
	
	double AnsNum;
	num *=1000;
	AnsNum = ((int)num)*0.001;
	printf("x(내림)   = %.3f\n",AnsNum);
	
	printf("20203500 이영주\n");
	*/

	//본 과제(4)-환율 계산기
	/*double exRate;
	int money;
	printf("\n오늘의 환율(1$)을 원 단위로 입력하세요.");
	scanf("%lf", &exRate);

	for (int i = 0; i < 3; i++)
	{
		printf("\n환전할 금액을 원 단위로 입력하세요.");
		scanf("%d", &money);
		printf("\n$%.2f를 받으세요.\n", money / exRate);
	}
	
	printf("20203500 이영주\n");
	*/

	//본 과제(5)-overflow
	char a = 100, b = 150;
	a = a * 2;
	b = b * 2;
	printf("%d %d\n", a, b);

	//a=-56 b=44가 나오는데, 예상치 못한 값이 들어가 있다. 정수형 char 자료형의 크기는 -128~127까지를 표현할 수 있는데 
	//a값을 100으로 초기화한 것은 문제가 없지만 b를 150을 초기화 한 것은 127을 초과해 오버플로가 발생하였다.
	//a에 2를 곱하면 200이 되므로 역시 127을 넘어서서 a도 오버플로가 발생하였다.
	//b는 이미 오버플로 된 상태이고 150에 2를 곱해도 역시 오버플로가 발생하기에 a와 b모두 예상치 못한 값이 들어가있다.
	//즉 a와 b 모두 자료형 char이 표현가능한 -128~127의 범위를 벗어나서 오버플로가 발생해 예상치 못한 값이 들어가게 되었다.

	//자유과제
	int age;                //나이는 정수이기 때문에 정수형 자료형 int로 변수 생성
	printf("몇살이예요?");
	scanf_s("%d", &age);    //age가 int 자료형이기에 사용자 입력을 %d 형식으로 받은 뒤 그 값을 age 변수에 넣는다

	float weight;                       //몸무게는 실수이기 때문에 실수형 자료형 float로 변수 생성
	printf("몸무게는 몇 kg 이예요?");   
	scanf_s("%f", &weight);             //weight가 float 자료형이기에 사용자 입력을 %f 형식으로 받고 그 값을 weight 변수에 넣는다

	double height;                    //키는 실수이기 때문에 실수형 자료형 double로 변수 생성 
	printf("키는 몇 cm 이예요?");      
	scanf_s("%lf", &height);          //height는 double 자료형이기 때문에 %lf 형식으로 사용자에게 값을 입력받고 값을 height 변수에 넣는다

	printf("\n\n---신상 조사---\n\n");
	printf("나이    : %d\n", age);          //age(int형)라는 정수값을 출력하기에 %d를 사용
	printf("몸무게  : %.2f\n", weight);     //weight(float형)라는 실수값을 출력하기에 %f를 사용, 소수점 둘째자리까지 나타내기 위해 %.2f사용
	printf("키      : %.2lf\n", height);    //height(double형)라는 실수값을 출력하기에 %lf를 사용, 소수점 둘째자리까지 나타내기 위해 %.2lf사용



	return 0;
}