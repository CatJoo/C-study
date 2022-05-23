#include <stdio.h>

int main(void)
{
	//1
	/*int year = 2022;  //선언과 동시에 변수 초기화

	int credits;
	credits = 19;  //선언된 변수에 초기화

	printf("%d년도\n", year);
	printf("이수학점: %d학점\n", credits);

	//2
	int data1 = 20, data2 = 13;

	//대입 연산자의 왼쪽과 오른쪽에서의 변수의 의미 해석
	int diff = data1 - data2;
	int sum = data1 + data2;

	printf("data1: %d, data2: %d\n", data1, data2);
	printf("차: %d, 합: %d%\n", diff, sum);
	*/
	//3
	/*short sVar = 32000;  //-32767에서 32767까지
	int iVar = -2140000000; //약 21억 정도까지 저장 가능

	printf("저장 값: %d %d\n", sVar, iVar);

	sVar = sVar + sVar;
	iVar = iVar + iVar;

	printf("저장 값 : %d %d\n", sVar, iVar);    //오류, sVar과 iVar 오버플로, 언더플로
	*/

	//4
	/*float x = 3.14F;       //float x = 3.14; 인 경우, 경고 발생(컴퓨터는 실수를 보통 double로 인식. 하지만 float이니까..)
	double y = -3.141592;  //double 저장공간 크기는 float의 2배
	long double z = 29.74; //double과 long double은 저장공간이 모두 64비트

	printf("부동 소수 값: %f %f %f\n", x, y, z);

	//5
	char c1 = 'a';   //소문자 a
	char c2 = 65;    //대문자 A가 코드 값 65

	printf("문자 값(문자): %c %c\n", c1, c2);
	printf("코드 값(번호): %d %d\n", c1, c2);
	*/

	//6
	printf("%d, %d\n", 010, 015);  //8진수
	printf("%d, %d\n", 10, 15);  //10진수
	printf("%d, %d\n", 0X1a, 0x15);  //16진수

	printf("%f, ", 2.71828);
	printf("%f, ", 2.71828E+2);
	printf("%f\n", 2.71828e-2);

	return 0;
}