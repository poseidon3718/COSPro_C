// 20240412 C��� �ڵ�

#include <stdio.h>

int main(void) {
	int num = 0;
	int i = 2;
	int j = 0;
	int cnt = 0;
	int sum = 0;
	printf("1~num������ ���� ������ ���� ���ϼ���. \n");
	printf("num�� �Է��ϼ���. : ");
	scanf_s("%d", &num);

	// for ��
	printf("\n\n\nfor�� �̿� \n\n\n");

	for (i = 2; i <= num; i = i + j)
	{
		j = j + 1;
		sum = sum + i;
		printf("cnt= %2d,  j=  %2d, i= %3d, sum = %d\n", cnt, j, i, sum);
	}

	// while ��
	printf("\n\n\nwhile�� �̿� \n\n\n");
	i = 2; // i �ʱ�ȭ
	sum = 0;
	j = 0;

	while (i <= num)
	{
		sum = sum + i;
		j = j + 1;
		printf("cnt= %2d,  j=  %2d, i= %3d, sum = %d\n", cnt, j, i, sum);
		i = i + j;
	}


	// do while ��
	printf("\n\n\ndo while�� �̿� \n\n\n");
	i = 2; // i �ʱ�ȭ
	sum = 0;
	j = 0;
	do
	{
		sum = sum + i;
		j = j + 1;
		printf("cnt= %2d,  j=  %2d, i= %3d, sum = %d\n", cnt, j, i, sum);
		i = i + j;
	} while (i <= num);

	return 0;
}

/*
	int num = 0;
	int i = 0;
	int sum = 0;

	printf("1-num������ ���� ���ϼ��� num�� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	// for ��
	printf("\n\n\nfor�� �̿� \n\n\n");
	for (i = 1; i <= num; i++)
	{
		sum += i;

		printf("%d + ", i);
	}

	// while ��
	printf("\b\b = %d\n\n\n", sum);
	printf("\n\n\nwhile�� �̿� \n\n\n");
	i = 1; // i �ʱ�ȭ
	sum = 0;
	while (i <= num)
	{
		sum += i;
		printf("%d + ", i);
		i++;
	}
	printf("\b\b = %d\n\n\n", sum);

	// do while ��
	printf("\n\n\ndo while�� �̿� \n\n\n");
	i = 1;
	sum = 0;
	do

	{
		sum += i;
		printf("%d + ", i);
		i++;
	} while (i <= num);

	printf("\b\b = %d\n\n\n", sum);

	return 0;

*/
