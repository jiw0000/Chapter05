#include<stdio.h>
#define CM_INCH 0.39370

int main()
{
	float cm, inch;
	int ft;

	printf("센티미터 단위로 키를 입력하십시오 : ");
	scanf_s("%f", &cm);

	while (cm > 0)
	{
		inch = cm * CM_INCH;
		ft = (int)inch / 12;
		inch -= (ft * 12);

		printf("%.1f센티미터는 %d피트, %.1f인치입니다.\n", cm, ft, inch);

		printf("센티미터 단위로 키를 입력하십시오(끝내려면 <= 0) : ");
		scanf_s("%f", &cm);
	}
	printf("안녕!\n");

}