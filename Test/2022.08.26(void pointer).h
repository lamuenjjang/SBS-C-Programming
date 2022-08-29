/*
#include <stdio.h>

// 함수의 원형이란?
// 호출할 함수를 컴파일러에게 미리 알려주는 과정입니다.
// 단일 패스 컴파일(O) 멀티 패스 컴파일


void Integer(int x)
{
	printf("Integer 함수의 값 : %d\n",x);
}
void Character(char x)
{
	printf("Character 함수의 값 : %c\n", x);
}
void Decimal(float x)
{
	printf("Decimal 함수의 값 : %f\n", x);
}
void Function();

// 스왑함수에서 값을 바꾸는 로직을 만들어 주세요.
void Swap(int x,int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
	printf("바꾼 A와 B의 값 : %d, %d\n", x, y);
}
// 더하기 함수
// 2개 인수에 값을 넣어서 계산되는 결괏값을 출력합니다.
void Add(int x,int y)
{
	int result = x + y;
	printf("덧셈 결과 : %d\n", result);
}
// 빼기 함수
// 2개 인수에 값을 넣어서 계산되는 결괏값을 출력합니다.
void Sub(int x, int y)
{
	int result = x - y;
	printf("뺄셈 결과 : %d\n", result);
}
// 곱셈 함수
// 2개 인수에 값을 넣어서 계산되는 결괏값을 출력합니다.
void Mul(int x, int y)
{
	int result = x * y;
	printf("곱셈 결과 : %d\n", result);
}
// 나눗셈 함수
// 2개 인수에 값을 넣어서 계산되는 결괏값을 출력합니다.
void div(int x, int y)
{
	int result = x / y;
	printf("나눗셈 결과 : %d\n", result);
}

void main()
{

	// 범용 void 포인터란?

	// 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터입니다.
	int value = 10;

	void* ptr = &value;

	// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없습니다.
	// *ptr = 20; <- ERROR

	*(int*)ptr = 20;

	printf("ptr이 가리키는 값 : %d\n", *(int*)ptr);

	// 범용 포인터로 변수의 메모리에 접근하려면
	// 범용 포인터가 가리키는 변수의 자료형으로 형 변환을 해주어야 합니다.

	float decimal = 10.5;
	ptr = &decimal;

	*(float*) ptr = 20.5;
	printf("ptr이 가리키는 값 : %f\n", *(float*) ptr);

	// 내가 함수에 입력하는 데이터(변수)가 출력되도록 하고 싶을때
	// char(문자) int(정수) float(실수)
	// Integer(10);
	// Character('A');
	// Decimal(10.5);

	int A = 10;
	float B = 20.5;
	char C = 'R';

	Function("int", &A);
	Function("float", &B);
	Function("char", &C);


	// 두개의 변수의 값을 바꿔주세요.
	// 하나의 임시 변수를 만들어서 거기에 값을 보관했다가 옮기면 됩니다.
	int A = 10;
	int B = 20;
	int temp = 0;
	printf("A와 B의 값 : %d, %d\n", A, B);


	temp = A;
	A = B;
	B = temp;

	printf("A와 B의 값 : %d, %d\n", A, B);


	// 값에 의한 호출ㄱ
	// 함수 호출시 전달되는 변수의 값을 복사하여
	// 함수의 인자로 전달하는 방법입니다.
	Swap(A, B);
	Add(10,2);
	Sub(5,5);
	Mul(20,4);
	div(10,2);
}

// char * name ----> [c]har
// void * value ----> A의 시작 주소


void Function(char* name, void* value)
{
	printf("%p\n", name); // name 변수의 시작주소 ex) 00FF55DA
	printf("%s\n", name); // name 변수의 문자열 int == int

	// if문이 비교되는 원리는 %s로 구분합니다.
	if (name == "int")
	{
		printf("%d\n", *(int*)value);
	}
	else if (name == "float")
	{
		printf("%f\n", *(float*)value);
	}
	else if (name == "char")
	{
		printf("%c\n", *(char*)value);
	}
}*/
