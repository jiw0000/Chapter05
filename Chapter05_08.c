#include <stdio.h>

int main()
{
	int fir, sec;

	printf("�� ���α׷��� ��ⷯ��(�� ���� ���� ������)�� ���ϴ� ���α׷��̴�.\n");

	printf("�� ��° �ǿ����ڷ� ������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &sec);

	printf("���� ù��° �ǿ����ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &fir);

	while (fir > 0)
	{
		printf("%d %% %d = %d\n", fir, sec, (fir % sec));

		printf("ù ��° �ǿ�����(<=0 �̸� ����)�� ���� ���� �Է��Ͻÿ� : ");
		scanf("%d", &fir);
	}
	printf("����\n");


}