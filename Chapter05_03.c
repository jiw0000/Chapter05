#include<stdio.h>

int main()
{
	int date, week, day;
	
	scanf_s("%d", &date);

	while (date > 0)
	{
		week = date / 7;
		day = date % 7;
		printf("%d���� %d��, %d���Դϴ�.\n", date, week, day);

		scanf_s("%d", &date);
	}

}