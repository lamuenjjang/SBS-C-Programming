#pragma once

/*
#include <stdio.h> // <> 라이브러리 헤더 파일을 가져올때 사용합니다.
#include "Function.h" // ""사용자 정의 헤더 파일을 가져 올 때 사용합니다.

// 매크로란?

// 프로그램 내에서 특정한 데이터가 문자열로 정의되고 처리되는 과정입니다.
#define PI 3.14

// 매크로는 자료형이 없으므로 메모리를 차지하지 않습니다.

// 매크로에서는 ;로 필요하지 않습니다.

// 매크로 함수도 자료형이 없으므로 메모리 공간이 확보되지 않습니다.
#define Solution(x,y) x*y

#define ANDROID 1
#define IOS 0


// 구조체
struct Character
{
	//
	int health;
	float weight;
	const char* name;
	// 구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로
	// 구조체 내부에 있는 데이터를 초기화 할 수 없습니다.
};


void main()
{
	// 전처리기란?

	// 프로그램이 컴파일 되기 이전에 프로그램에 대한 사전 처리하는 과정입니다.

	int result = Function(10,20);

	printf("result 변수의 값 : %d\n",result);

	// 매크로 변수는 상수이고, 메모리 공간이 없기 때문에 값을 변경할 수 없습니다.
	// PI = 3.25; <- ERROR

	printf("PI의 값 : %f\n", PI);
	printf("Sollution 함수의 결과 : %d\n", Solution(10, 20));
	int a = 1;
	int b = 2;
	printf("Sollution 함수의 결과 : %d\n", Solution(a+1,b+1));
										 // 1+ (1 * 2) + 1



	// 매크로의 단점
	// 문제가 생겼을때 디버깅이 되지 않습니다.

	// 조건부 컴파일

	// 조건에 따라 일정 부분을 컴파일 할지 안할지 결정할 수 있습니다.
	// 조건부 컴파일은 #endif를	사용해서 끝내야 됩니다.

#if IOS
	printf("첫번째 조건입니다.");
#elif 10 < 5
	printf("두번째 조건입니다.");
#else
	printf("두 조건이 다 틀립니다.");
#endif


	// 구조체란?

	// 여러개의 변수를 하나의 집합으로 구조화한 다음 하나의 객체를 생성하는 것입니다.
	struct Character leesin;

	leesin.health = 100;
	leesin.weight = 78.2f;
	leesin.name = "fury of dragon";

	printf("leesin의 체력 : %d\n", leesin.health);
	printf("leesin의 이름 : %s\n", leesin.name);
	printf("leesin의 몸무게 : %f\n", leesin.weight);

	// 구조체에 초기화 리스트를 사용할 때는
	// 구조체 위에서 선언된 변수의 순서로 정의되어야합니다.
	struct Character Alistar = {200, 100.5f,"Alistar"};

	printf("Alistar의 체력 : %d\n", Alistar.health);
	printf("Alistar의 이름 : %s\n", Alistar.name);
	printf("Alistar의 몸무게 : %f\n", Alistar.weight);


	// 과잉수
	// 자연수 중에서 자기 자신을 제외한 양의 약수를
	// 모두 더했을 때 자기 자신보다 큰 수
	int result = 0;
	int number = 0;

	scanf_s("%d",&number);

	for(int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			result += i;
		}
	}
	if (result > number)
	{
		printf("%d는 과잉수입니다.\n", number);
		printf("약수의 합 : %d, 입력받은수 : %d\n", result, number);
	}
	else
	{
		printf("%d는 과잉수가 아닙니다.\n", number);
		printf("약수의 합 : %d, 입력받은수 : %d\n", result, number);
	}
} */