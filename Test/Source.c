#include <stdio.h>

void Function() 
{
	printf("Hello\n");
}


void main()
{
	// ���� ������ ����
	/*
	int a = 10;
	int b = 20;

	int * ptr1 = &a;
	int * ptr2 = &b;

	int** pptr1 = &ptr1;
	int** pptr2 = &ptr2;

	// printf("pptr1�� �� : %d\n",**pptr1);

	int* temp = *pptr1;
	*pptr1 = *pptr2;
	*pptr2 = temp;

	printf("a�� �� : %d, b�� �� : %d\n", a, b);
	printf("ptr1�� ����Ű�� �� : %d, ptr2�� ����Ű�� �� : %d\n", *ptr1, *ptr2);
	*/

	// �ʱ۸� ������
	/*
	// �̹� ������ �޸𸮸� ����Ű�� �ִ� �������Դϴ�.
	int* ptr = (int*)malloc(4);

	// a�� b�� ������ �������� stack �޸� ������ ����˴ϴ�.
	int a = 10; // 4 byte

	*ptr = 10;
	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);
	printf("ptr�� �� : % d\n", *ptr);

	free(ptr);
	// ���� �Ҵ��� �޸𸮸� ������ ��, ������ ������ NULL�� �ʱ�ȭ�մϴ�.
	ptr = NULL;

	// ������ �޸𸮸� �ٽ� �Ҵ��ϸ�
	ptr = (int*)malloc(4);

	*ptr = 20;
	printf("ptr�� ����Ű�� �� : %d \n",*ptr);
	*/

	// �𸮾� (C++) <- c ��� Ȯ����
	// ����Ƽ (C#) <- c ��� ������� �� ������ ���

	// C�� ���� ����
	// ���α׷��ֿ� ���� ����
	// C ���� �����ϴ� (�ϵ����,PLC)

	// �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� �����Դϴ�.

	printf("Function �Լ��� �ּ� : %p\n", Function);
	printf("Function �Լ��� �ּ� : %p\n", &Function);

	void (*fp)(int);
	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű������� Ÿ���� ��ġ�ؾ� �ϸ�,
	// �Լ� �����͸� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� �����ϴ�.
	fp = Function;

	fp(4);
}