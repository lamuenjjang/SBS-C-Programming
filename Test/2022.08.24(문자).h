#pragma once
#include <stdio.h>
/*
void main()
{
	// ���ڿ��̶�?

	// �������� �޸� ������ ������ ���� ������ �����Դϴ�.

	// char�� 1 byte�̹Ƿ� �ϳ��� ���ڸ� ������ �� �ֽ��ϴ�.
	char alphabet = 'A';

					 // 0   1   2   3   4
	char string[6] = { 'A','B','C','D','E'};

	string[0] = 'T';

	// ���� �迭�� ������ ��, �� �������� NULL�� ���Ե˴ϴ�.
	// ���� �迭���� ��쿡�� �迭�� ũ�� n + 1�� �����ؾ��մϴ�.

	printf("string �迭�� �� : %s\n", string);

	// NULL���ڴ� ���ڿ��� ���� �˷��ִ� ���� �����Դϴ�.

	// [T] [B] [\0] [D] [E]
	string[2] = '\0';

	// ���� �迭 �߰��� NULL���ڰ� ������ NULL���� ������ ���ڿ������� ����մϴ�.
	printf("string �迭�� �� : %s\n", string);


	// ���ڿ� �ʱ�ȭ

	// �ڵ� ����
	// ������ ���� - > BSS, Read Only Data Segment,
	// ���� ����
	// �� ����

	// "count"
	// [c] [o] [u] [n] [t] [\0] -> 5 char + NULL = 6 byte

	// 4 byte ������ �޸𸮸� ������ ��  �ִ� ������ ����
	// char * ptr -> [c][o][u][n][t][\0]

	const char* ptr = "count";

	// �����Ͱ� ������ ��� ����Ű�� �ִ��� Ȯ���ϱ� ���ؼ�
	// �ű� �ִ� ���� ����ϱ� ���ؼ� %c�� ����մϴ�.

	// ptr[0] = 'T';
	// *ptr�� �ϴ� ���� �����Ͱ� ����Ű�� �ִ� ��ġ�� �����ؼ� ���� ����մϴ�.
	// ptr = count
	// "%s" ���ڿ��� �����ּҷ� �����ؼ� ���� count ����Ѵٰ� ���� �˴ϴ�.

	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);
	printf("ptr�� ����Ű�� �� : %c\n", ptr[0]);
	printf("ptr�� ����Ű�� ���ڿ��� �� : %s\n", ptr);


	// ���� ������

	int value = 100;

	// ptr(value �ּ�) -> value �ּҸ� ����ŵ�ϴ�.
	int * ptr = &value;

	// twoPtr(���� ������)�� ptr�̶�� ������ ������ �ּҸ� �����մϴ�.
	// twoPtr(ptr�� �ּ�) -> ptr�� �����ּҸ� ����ŵ�ϴ�.
	int** twoPtr = &ptr;
	printf("value�� �����ּ� : %p\n", &value);
	printf("ptr�� ����Ű�� �� : %p\n", ptr);
	printf("twoPtr�� ����Ű�� �� : %p\n", twoPtr);

	printf("ptr������ ����Ű�� �ִ� ������ �� : %d\n", *ptr);
	printf("twoPtr������ ����Ű�� �ִ� ������ �� : %d\n", **twoPtr);

	// twoPtr          ptr(00FF883A)        value
	// [00FF883A] ---> [00DDFC55] -----> [00DDFC55]


	// �Ҽ� ���ϱ�

	// �Ҽ�(1���� ū �ڿ��� �߿� 1�� �ڱ��ڽŸ��� ����� ������ ��)
	// ����
	// 1�� 20������ �Ҽ��� ������ּ���.
	int count = 0;
	int value;

	scanf_s("%d", &value);
	for (int i = 2; i <= value - 1; i++)
	{
		if (value % i == 0)
		{
			count++;
		}

	}
	if (count == 0)
	{
		printf("%d�� �Ҽ��Դϴ�.",value);
	}
	else
	{
		printf("%d�� �Ҽ��� �ƴմϴ�.", value);
	}
}*/