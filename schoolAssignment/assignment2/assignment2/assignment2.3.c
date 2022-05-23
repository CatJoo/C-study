#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_3()
{
	//¼·¾¾ È­¾¾
	//F = 1.8 * C + 32
	//C = (F - 32) /1.8
	
	double temp;
	printf("¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä ");
	scanf("%lf", &temp);
	double celsius = (temp - 32) /1.8;
	double fahrenheit = 1.8 * temp + 32;
	printf("¼·¾¾ %.1fµµ´Â È­¾¾ %.1fµµ ÀÔ´Ï´Ù.\n", temp, fahrenheit);
	printf("È­¾¾ %.1fµµ´Â ¼·¾¾ %.1fµµ ÀÔ´Ï´Ù.\n", temp, celsius);
	
	printf("20203500 ÀÌ¿µÁÖ");


	return 0;
}