#include<stdio.h>

int main()
{
	int count, sum, date;

	scanf_s("%d", &date);

	count = 0;
	sum = 0;

	while (count++ < date)
		sum = sum + count;

	printf("%d�ϵ��� �� ���� �� $%d�Դϴ�.\n", date, sum);

}