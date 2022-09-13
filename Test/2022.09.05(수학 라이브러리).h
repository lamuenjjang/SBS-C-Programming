/*
#include <stdio.h>
#include <math.h> // 수학관련 헤더파일

struct Player
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};


void parameterArray(int array[])
{
	for (int i = 0; i < 5; i++)
	{
		array[i] = 10;
	}
}

void StructArray(struct Player* x)
{

}

int main()
{
	// void main vs int main
	
	// int main() 함수가 종료할때 정수형 값을 리턴하겠다는 의미입니다.
	// 운영체제에게 프로그램의 종료 사유를 전달해 주는 것입니다.

	// 0을 리턴하게 되면 프로그램이 정상적으로 실행을 마치고 종료하는 것으로 판단합니다.
	// 0 이외에 값을 리턴하게 되면 비정상적으로 종료하는 것으로 판단합니다.

	// void main() 함수가 종료할 떄 아무 값도 리턴하지 않겠다는 의미입니다.


	// 루트, 제곱근
	
	int value = 49;
	printf("루트의 값 : %lf\n", sqrt(value));


	int variable = 10;
	printf("variable의 제곱은 : %lf\n", pow(variable, 2));
	

	// 두 점 사이의 거리
	
	struct Player Character = {0,0};
	struct Monster dragon = {3,5};

	// Character와 Dragon의 거리를 구해주세요.

	double result = sqrt((pow(Character.x - dragon.x, 2) + pow(Character.y - dragon.y, 2)));

	printf("Character와 Dragon의 거리 : %lf\n",result);
	

	// Lvalue vs Rvalue?
	
	// Lvalue란?
	// 표현식 이후에도 사라지지 않는 값이며, 이름을 지니고 있는 변수입니다.

	// Rvalue란?
	// 표현식 이후에 사라지는 값이며, 임시 변수입니다.

	// 10, 20 <- Rvalue
	// a, b	<- Lvalue
	// Lvalue는 Rvalue로도 사용할 수 있습니다.
	int a = 10;
	int b = 20;

	int result = a + b;

	// Lvalue에 상수를 사용할 수 없습니다.
	// 10 = a;

	printf("result 변수의 값 : %d", result);

	// 전위 증감, 후위 증감
	// 전위 증감같은 경우에는 Lvalue랑 Rvalue로 사용할 수 있습니다.
	// 후위 증감같은 경우에는 Rvalue로만 사용이 가능합니다.

	int x = 0;
	int y = 0;

	// 전위 증가는 증가된 자기 자신(변수)을 반환합니다.
	++y;

	// 후위 증가는 증가된 복사본을 반환합니다.
	x++;
	

	// [0] [0] [0] [0] [0]
	int room[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}
	printf("\n");

	// room이라는 이름은 배열의 시작주소를 의미합니다.
	;	parameterArray(room);
	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}



	return 0;
}*/