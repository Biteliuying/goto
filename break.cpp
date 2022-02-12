#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*int abc = 2, a = 1, b = 3, c = 5;*/
	//switch (a)
	//{
	//case 0:
	//	printf("a=1 true\n");
	//	break;
	//case 2:
	//	printf("a=1 true\n");
	//	break;
	//default:
	//	printf("a=1 true\n");
	//	break;
	////}
	int i = 1, sum = 0;
	loop:
	if (i <= 100)
	{
		sum = sum + i;
		i++;
		goto loop;
	}
	else
	printf("sum(1-100)=%d\n", sum);
	return 0;

}