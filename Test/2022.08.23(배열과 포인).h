#include <stdio.h>
/*
void main()
{
	// 포인터 연산

	int array[5] = { 10, 15, 20, 25, 30};

	printf("배열의 주소는 : %p\n", array);

	int* pointer = array;

	printf("pointer 변수의 값 : %p\n", pointer);
	printf("pointer 변수가 가리키는 값 : %p\n", *pointer);

	// pointer 변수가 가리키는 자료형의 크기만큼 증가합니다.
	pointer = pointer + 1;
	printf("pointer 변수의 값 : %p\n", pointer);
	printf("pointer 변수가 가리키는 값 : %p\n", *pointer);

	// 문제
	// 배열 array[3]의 요소의 값을 포인터로 접근해서 100이라는 값으로 변경해주세요.

	pointer = pointer + 2;
	*pointer = 100;
	printf("pointer 변수의 값 : %p\n", pointer);
	printf("pointer 변수가 가리키는 값 : %p\n", *pointer);


	// 최댓값과 최솟값 구하기

	// data라는 배열 안에서 최댓값 : 66
	// data라는 배열 안에서 최솟값 : 1

	int max = 0;
	int min = 10001;

	int data[5] = { 10,5,66,1,2 };

	for (int i = 0; i < 5; i++)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
		if (data[i] < min)
		{
			min = data[i];
		}
	}
	printf("data의 최댓값 : %d\n",max);
	printf("data의 최솟값 : %d\n",min);

	// 상수 지시 포인터
	// 상수를 가리키는 포인터이며, 포인터 자체는 상수가 아닙니다.

	int value = 100;
	int x = 300;
	const int* ptr = &value;

	// 포인터 변수가 가리키는 값을 변경할 수 없습니다.
	// * ptr = 100;

	// 상수 지시 포인터는 가리키는 변수를 상수화하지 않습니다.
	value = 200;

	// 포인터가 가리키는 값은 출력할 수 있습니다.
	printf("ptr이 가리키는 값은 : %d\n", *ptr);

	// 상수 지시 포인터의 경우 다른 변수의 주소는 저장할 수 있습니다.
	ptr = &x;

	printf("ptr이 가리키는 값: %d\n", *ptr);


	// 2차원 배열
	// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

	// 앞에 있는 배열이 열의 길이, 뒤에 있는 배열이 행의 길이
	// 3열 2행

	int team[3][2] =
	{
		{0 , 5}, // [0][0] = 0 , [0][1] = 5
		{10, 2}, // [1][0] = 10, [1][1] = 2
		{9 , 4}  // [2][0] = 9 , [2][1] = 4
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d 열과 %d 번째 행에 있는 값 : %d\n",i,j,team[i][j]);
		}
	}


}*/
