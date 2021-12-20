//Multiplication Table Up to 10
#include<stdio.h>
int main()
{
	int n;
	int i;
	printf("Enter a number : ");
	scanf_s("%d", &n);
	for (i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d\n", n, i, i * n);
	}
	return 0;
}