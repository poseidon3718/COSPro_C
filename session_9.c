// 20240413 C��� �ڵ�

#include <stdio.h>

void example1(void);
void example2(void);
void example3(void);

int GetAbsoValue(int num) {
	if (num < 0) {
		return num * (-1);
	}
	else {
		return num;
	}
}

int AbsoCompare(int num1, int num2) {
	if (GetAbsoValue(num1) > GetAbsoValue(num2)) {
		return num1;
	}
	else {
		return num2;
	}
}
int GetAbsoValue(int num);

int add(int num1, int num2) {
	int result = 0;
	result = num1 + num2;
	return result;
}

int sub(int num1, int num2) {
	int result = 0;
	result = num1 - num2;
	return result;
}

void ShowAddResult(int num) {
	printf("���� ��� ��� %d\n", num);
}

int ReadNum(void) {
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void) {
	printf("�� ���� ������ �Է��Ͻø� ���� ����� ��µ˴ϴ�. \n");
	printf("�� ���� ������ �Է��ϼ���. \n");
}

int main(void) {

	int num1, num2;
	printf("�� ���� ������ �Է��ϼ���. \n");
	scanf_s("%d %d", &num1, &num2);
	printf("%d�� %d �� ������ ū ���� : %d \n", num1, num2, AbsoCompare(num1, num2));

	// example1();
	// example2();
	// example3();

	return 0;
}


void example1(void) {
	int num1 = 0, num2 = 0;

	num1 = printf("1234");
	printf("  num : %d\n", num1);
}

void example2(void) {

	int test = 0;

	test = add(1, 2);
	printf("add test = %d \n", test);
	ShowAddResult(test);

	test = sub(1, 2);
	printf("sub test = %d \n", test);
}

void example3(void) {
	int num1 = 0, num2 = 0, test = 0;

	HowToUseThisProg();

	num1 = ReadNum();
	num2 = ReadNum();
	test = add(num1, num2);
	ShowAddResult(test);
}