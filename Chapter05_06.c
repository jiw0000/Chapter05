#include <stdio.h>

int main()
{
	int count, sum, date;

	scanf_s("%d", &date);

	count = 0;
	sum = 0;

	while (count++ < date)
		sum = sum + (count * count);

	printf("%d�ϵ��� �� ���� ", date);
	printf("�� $%d�Դϴ�.\n", sum);

}