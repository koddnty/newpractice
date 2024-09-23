#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

/*001*/
//指针数组，数组指针
int main(void)
{
	int arr[5] = { 0, 2, 4, 6 };
	int* parr[5] = { &arr };
	printf("%d\n", (*parr[0]));

	double a = 53.6655;
	double* pa = &a; //将a的地址存入pa中
	double* *arr[5] = pa;//将pa存入指针数组中
	printf("**%13.5f**", arr[0] );

	return 0;
}