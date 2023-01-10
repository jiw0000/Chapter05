#include<stdio.h>

int main()
{
	const int per = 60;
	int time, hours, mins;

	scanf("%d", &time);

	while (time > 0)
	{
		hours = time / per;
		mins = time % per;
		printf("%d minutes = %d hours , %d minutes\n", time, hours, mins);

		scanf("%d", &time);
	}
	
}