#include <stdio.h>

void Triple(float);

int main(void)
{
	float num;
	scanf_s("%f", &num);

	Triple(num);

	return 0;
}

void Triple(float num)
{
	printf("%.1f * %.1f * %.1f = %.1lf\n", num, num, num, (num * num * num));
}