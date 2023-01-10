#include <stdio.h>

int main()
{
	int fir, sec;

	printf("이 프로그램은 모듈러스(두 수를 나눈 나머지)를 구하는 프로그램이다.\n");

	printf("두 번째 피연산자로 제공할 정수를 입력하시오 : ");
	scanf("%d", &sec);

	printf("이제 첫번째 피연산자를 입력하시오 : ");
	scanf("%d", &fir);

	while (fir > 0)
	{
		printf("%d %% %d = %d\n", fir, sec, (fir % sec));

		printf("첫 번째 피연산자(<=0 이면 종료)용 다음 수를 입력하시오 : ");
		scanf("%d", &fir);
	}
	printf("종료\n");


}