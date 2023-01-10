#include<stdio.h>

int main()
{
	int num;
	int cnt = 0;

	scanf_s("%d", &num);

	while (cnt <= 10)
	{
		printf("%d ", num + cnt);
		cnt++;
	}
}