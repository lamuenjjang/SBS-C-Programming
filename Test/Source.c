#include <stdio.h>

void Function() 
{
	printf("Hello\n");
}


void main()
{
	// 이중 포인터 응용
	/*
	int a = 10;
	int b = 20;

	int * ptr1 = &a;
	int * ptr2 = &b;

	int** pptr1 = &ptr1;
	int** pptr2 = &ptr2;

	// printf("pptr1의 값 : %d\n",**pptr1);

	int* temp = *pptr1;
	*pptr1 = *pptr2;
	*pptr2 = temp;

	printf("a의 값 : %d, b의 값 : %d\n", a, b);
	printf("ptr1이 가리키는 값 : %d, ptr2가 가리키는 값 : %d\n", *ptr1, *ptr2);
	*/

	// 탱글링 포인터
	/*
	// 이미 해제된 메모리를 가리키고 있는 포인터입니다.
	int* ptr = (int*)malloc(4);

	// a와 b로 선언항 변수들은 stack 메모리 영역에 저장됩니다.
	int a = 10; // 4 byte

	*ptr = 10;
	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr의 값 : % d\n", *ptr);

	free(ptr);
	// 동적 할당한 메모리를 해제할 때, 포인터 변수를 NULL로 초기화합니다.
	ptr = NULL;

	// 해제한 메모리를 다시 할당하면
	ptr = (int*)malloc(4);

	*ptr = 20;
	printf("ptr이 가리키는 값 : %d \n",*ptr);
	*/

	// 언리얼 (C++) <- c 언어 확장팩
	// 유니티 (C#) <- c 언어 기반으로 더 편리해진 언어

	// C언어를 배우는 이유
	// 프로그래밍에 대한 기초
	// C 언어로 개발하는 (하드웨어,PLC)

	// 함수 포인터
	// 함수의 주소값을 저장하고 가리킬 수 있는 변수입니다.

	printf("Function 함수의 주소 : %p\n", Function);
	printf("Function 함수의 주소 : %p\n", &Function);

	void (*fp)(int);
	// 함수 포인터는 함수의 반환형과 매개변수의 타입이 일치해야 하며,
	// 함수 포인터를 사용하여 동적으로 메모리를 할당할 수 없습니다.
	fp = Function;

	fp(4);
}