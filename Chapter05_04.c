#include<stdio.h>
#define CM_INCH 0.39370

int main()
{
	float cm, inch;
	int ft;

	printf("��Ƽ���� ������ Ű�� �Է��Ͻʽÿ� : ");
	scanf_s("%f", &cm);

	while (cm > 0)
	{
		inch = cm * CM_INCH;
		ft = (int)inch / 12;
		inch -= (ft * 12);

		printf("%.1f��Ƽ���ʹ� %d��Ʈ, %.1f��ġ�Դϴ�.\n", cm, ft, inch);

		printf("��Ƽ���� ������ Ű�� �Է��Ͻʽÿ�(�������� <= 0) : ");
		scanf_s("%f", &cm);
	}
	printf("�ȳ�!\n");

}