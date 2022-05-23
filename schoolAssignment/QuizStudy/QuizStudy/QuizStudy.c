#include<stdio.h>

//void call(int x[5]);

int main()
{
	
	/*int value[5] = {1,2,3,4,5};
	call(value);

	for (int i = 0; i < 5; i++)
	{
		printf("%d", value[i]);
	}
	*/

	int x = 2, total = 0;
	do
	{
		printf("%d %d\n", total, x);
		total = x++ * 3;
	} while (++x < 10);

	printf("%d %d\n", total, x);


	return 0;
}

//void call(int x[5])
//{
//	x[2] = 100;
//}