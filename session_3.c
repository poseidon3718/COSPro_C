// 20240408 C��� �ڵ�

#include <stdio.h>

int main(void) {
    // ������ �������� �����ϰ� �ʱ�ȭ
    int num1 = 0xA7, num2 = 0x43;
    int num3 = 032, num4 = 24;

    // �� �������� ���� ���
    printf(" 0xA7�� 10�� ������: %d \n", num1);
    printf(" 0x%X�� 10�� ������: %d \n", num1, num1);
    printf(" 0x43�� 10�� ������: %d \n", num2);
    printf(" 0x%X�� 10�� ������: %d \n", num2, num2);

    printf(" 032�� 10�� ������: %d \n", num3);
    printf(" 0%o�� 10�� ������: %d \n", num3, num3);

    printf(" 24�� 10�� ������: %d \n", num4);
    printf(" 0%o�� 10�� ������: %d \n", num4, num4);

    return 0;
}

/*
#include <stdio.h>
int main(void)
    {
	char ch=9;
	int inum=1052;
	double dnum=3.1415;
	printf("���� ch�� ũ��: %d\n", sizeof(ch));
	printf("���� inum�� ũ��: %d\n", sizeof(inum));
	printf("���� dnum�� ũ��: %d\n", sizeof(dnum));
	
	printf("char�� ũ��: %d\n", sizeof(char));
	printf("int�� ũ��: %d\n", sizeof(int));
	printf("long�� ũ��: %d\n", sizeof(long));
	printf("long long�� ũ��: %d\n", sizeof(long long));
	printf("float�� ũ��: %d\n", sizeof(float));
	printf("double�� ũ��: %d\n", sizeof(double));
	
	return 0;
	}
*/

/*
#include <stdio.h>

int main(void) {
    int num1, num2, result = 0;

    // �� ������ �Է�
    printf("�� ���� ������ �Է��� �ּ���: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    // �� ������ ���� ����ϰ� ���
    result = num1 + num2;
    printf("�� ���� ���� %d�Դϴ�.\n", result);

    // �� ������ ���� ����ϰ� ���
    result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result);

    // �� ������ ���� ����ϰ� ���
    result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);

    // �� ������ �������� ����ϰ� ���
    result = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, result);

    // �� ������ �������� ����ϰ� ���
    result = num1 % num2;
    printf("%d %% %d = %d\n", num1, num2, result);

    return 0;
}
*/