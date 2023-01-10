#include <stdio.h>

int main()
{
	int count, sum, date;

	scanf_s("%d", &date);

	count = 0;
	sum = 0;

	while (count++ < date)
		sum = sum + (count * count);

	printf("%dÀÏµ¿¾È ¹ø µ·Àº ", date);
	printf("ÃÑ $%dÀÔ´Ï´Ù.\n", sum);

}