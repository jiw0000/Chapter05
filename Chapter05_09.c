#include <stdio.h>

void Temp(const double F)
{
	const double C = 5.0 / 9.0 * (F - 32.0);

	const double K = C + 273.16;

	printf("화씨 온도 : %.2lf\n", F);
	printf("섭씨 온도 : %.2lf\n", C);
	printf("절태 온도 : %.2lf\n", K);
}


int main(void)
{
	double f;

	printf("화씨 온도를 입력하세요 : ");

	while (1 == scanf("%lf", &f))
	{
		Temp(f);
		printf("화씨 온도를 입력하세요 : ");
	}

	return 0;

}


