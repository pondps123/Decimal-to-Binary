#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void binary(int num_dec)
{
	int num_bin,i = 0;
	int a[128],*b;
	while (num_dec != 0)
	{
		num_bin = num_dec % 2;
		a[i] = num_bin;
		num_dec /= 2;
		i++;
	}
	b = a;
	i--;
	printf("Binary : ");
	for (i; i >= 0; i--)
	{
		printf("%d", *(b+i));
	}
	return;
}
int main()
{
	int a;
	printf("Enter Decimal Number : ");
	scanf("%d", &a);
	binary(a);
	return 0;
}