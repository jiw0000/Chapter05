#include<stdio.h>

int main()
{
	int count, sum, date;

	scanf_s("%d", &date);

	count = 0;
	sum = 0;

	while (count++ < date)
		sum = sum + count;

	printf("%dÀÏµ¿¾È ¹ø µ·Àº ÃÑ $%dÀÔ´Ï´Ù.\n", date, sum);

}