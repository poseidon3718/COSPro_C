// 20240404 C언어 코딩

#include <stdio.h> // 표준 입, 출력 관련 함수(printf 등)를 사용하기 위한 standardinputoutput.header 파일 선언

// int 정수형 반환, main 함수를 정의, (void) 매개 변수 없음
int main(void) {

	printf("Hello ! \n\n");			// printf 문으로 문자 출력한 후 \n 으로 줄바꾸기
	printf("I am a student. \n");	
	printf("%d\n", 1234);			// printf 문으로 &d 를 사용하여 10진 정수 데이터 받은 후 출력하기
	printf("%d     %d\n", 10, 20);	// printf 문으로 &d 를 사용하여 순서대로 받은 데이터 출력하기

	return 1; // main 함수의 반환 값을 1로 한다.
}