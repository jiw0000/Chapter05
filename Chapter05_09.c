#include <stdio.h>

void Temp(const double F)
{
	const double C = 5.0 / 9.0 * (F - 32.0);

	const double K = C + 273.16;

	printf("ȭ�� �µ� : %.2lf\n", F);
	printf("���� �µ� : %.2lf\n", C);
	printf("���� �µ� : %.2lf\n", K);
}


int main(void)
{
	double f;

	printf("ȭ�� �µ��� �Է��ϼ��� : ");

	while (1 == scanf("%lf", &f))
	{
		Temp(f);
		printf("ȭ�� �µ��� �Է��ϼ��� : ");
	}

	return 0;

}


