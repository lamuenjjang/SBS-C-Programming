#include <stdio.h>
/*
void main()
{
	// ������ ����

	int array[5] = { 10, 15, 20, 25, 30};

	printf("�迭�� �ּҴ� : %p\n", array);

	int* pointer = array;

	printf("pointer ������ �� : %p\n", pointer);
	printf("pointer ������ ����Ű�� �� : %p\n", *pointer);

	// pointer ������ ����Ű�� �ڷ����� ũ�⸸ŭ �����մϴ�.
	pointer = pointer + 1;
	printf("pointer ������ �� : %p\n", pointer);
	printf("pointer ������ ����Ű�� �� : %p\n", *pointer);

	// ����
	// �迭 array[3]�� ����� ���� �����ͷ� �����ؼ� 100�̶�� ������ �������ּ���.

	pointer = pointer + 2;
	*pointer = 100;
	printf("pointer ������ �� : %p\n", pointer);
	printf("pointer ������ ����Ű�� �� : %p\n", *pointer);


	// �ִ񰪰� �ּڰ� ���ϱ�

	// data��� �迭 �ȿ��� �ִ� : 66
	// data��� �迭 �ȿ��� �ּڰ� : 1

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
	printf("data�� �ִ� : %d\n",max);
	printf("data�� �ּڰ� : %d\n",min);

	// ��� ���� ������
	// ����� ����Ű�� �������̸�, ������ ��ü�� ����� �ƴմϴ�.

	int value = 100;
	int x = 300;
	const int* ptr = &value;

	// ������ ������ ����Ű�� ���� ������ �� �����ϴ�.
	// * ptr = 100;

	// ��� ���� �����ʹ� ����Ű�� ������ ���ȭ���� �ʽ��ϴ�.
	value = 200;

	// �����Ͱ� ����Ű�� ���� ����� �� �ֽ��ϴ�.
	printf("ptr�� ����Ű�� ���� : %d\n", *ptr);

	// ��� ���� �������� ��� �ٸ� ������ �ּҴ� ������ �� �ֽ��ϴ�.
	ptr = &x;

	printf("ptr�� ����Ű�� ��: %d\n", *ptr);


	// 2���� �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�Դϴ�.

	// �տ� �ִ� �迭�� ���� ����, �ڿ� �ִ� �迭�� ���� ����
	// 3�� 2��

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
			printf("%d ���� %d ��° �࿡ �ִ� �� : %d\n",i,j,team[i][j]);
		}
	}


}*/
