// 20240408 C언어 코딩

#include <stdio.h>

int main(void) {
    // 정수형 변수들을 선언하고 초기화
    int num1 = 0xA7, num2 = 0x43;
    int num3 = 032, num4 = 24;

    // 각 변수들의 값을 출력
    printf(" 0xA7의 10진 정수값: %d \n", num1);
    printf(" 0x%X의 10진 정수값: %d \n", num1, num1);
    printf(" 0x43의 10진 정수값: %d \n", num2);
    printf(" 0x%X의 10진 정수값: %d \n", num2, num2);

    printf(" 032의 10진 정수값: %d \n", num3);
    printf(" 0%o의 10진 정수값: %d \n", num3, num3);

    printf(" 24의 10진 정수값: %d \n", num4);
    printf(" 0%o의 10진 정수값: %d \n", num4, num4);

    return 0;
}

/*
#include <stdio.h>
int main(void)
    {
	char ch=9;
	int inum=1052;
	double dnum=3.1415;
	printf("변수 ch의 크기: %d\n", sizeof(ch));
	printf("변수 inum의 크기: %d\n", sizeof(inum));
	printf("변수 dnum의 크기: %d\n", sizeof(dnum));
	
	printf("char의 크기: %d\n", sizeof(char));
	printf("int의 크기: %d\n", sizeof(int));
	printf("long의 크기: %d\n", sizeof(long));
	printf("long long의 크기: %d\n", sizeof(long long));
	printf("float의 크기: %d\n", sizeof(float));
	printf("double의 크기: %d\n", sizeof(double));
	
	return 0;
	}
*/

/*
#include <stdio.h>

int main(void) {
    int num1, num2, result = 0;

    // 두 정수를 입력
    printf("두 개의 정수를 입력해 주세요: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    // 두 정수의 합을 계산하고 출력
    result = num1 + num2;
    printf("두 수의 합은 %d입니다.\n", result);

    // 두 정수의 차를 계산하고 출력
    result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result);

    // 두 정수의 곱을 계산하고 출력
    result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);

    // 두 정수의 나눗셈을 계산하고 출력
    result = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, result);

    // 두 정수의 나머지를 계산하고 출력
    result = num1 % num2;
    printf("%d %% %d = %d\n", num1, num2, result);

    return 0;
}
*/