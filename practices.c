#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

/*001*/
//ָ�����飬����ָ��
int main(void)
{
	int arr[5] = { 0, 2, 4, 6 };
	int* parr[5] = { &arr };
	printf("%d\n", (*parr[0]));

	double a = 53.6655;
	double* pa = &a; //��a�ĵ�ַ����pa��
	double* *arr[5] = pa;//��pa����ָ��������
	printf("**%13.5f**", arr[0] );

	return 0;
}