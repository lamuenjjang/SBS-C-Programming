/*
#include <stdio.h>

// �Լ��� �����̶�?
// ȣ���� �Լ��� �����Ϸ����� �̸� �˷��ִ� �����Դϴ�.
// ���� �н� ������(O) ��Ƽ �н� ������


void Integer(int x)
{
	printf("Integer �Լ��� �� : %d\n",x);
}
void Character(char x)
{
	printf("Character �Լ��� �� : %c\n", x);
}
void Decimal(float x)
{
	printf("Decimal �Լ��� �� : %f\n", x);
}
void Function();

// �����Լ����� ���� �ٲٴ� ������ ����� �ּ���.
void Swap(int x,int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
	printf("�ٲ� A�� B�� �� : %d, %d\n", x, y);
}
// ���ϱ� �Լ�
// 2�� �μ��� ���� �־ ���Ǵ� �ᱣ���� ����մϴ�.
void Add(int x,int y)
{
	int result = x + y;
	printf("���� ��� : %d\n", result);
}
// ���� �Լ�
// 2�� �μ��� ���� �־ ���Ǵ� �ᱣ���� ����մϴ�.
void Sub(int x, int y)
{
	int result = x - y;
	printf("���� ��� : %d\n", result);
}
// ���� �Լ�
// 2�� �μ��� ���� �־ ���Ǵ� �ᱣ���� ����մϴ�.
void Mul(int x, int y)
{
	int result = x * y;
	printf("���� ��� : %d\n", result);
}
// ������ �Լ�
// 2�� �μ��� ���� �־ ���Ǵ� �ᱣ���� ����մϴ�.
void div(int x, int y)
{
	int result = x / y;
	printf("������ ��� : %d\n", result);
}

void main()
{

	// ���� void �����Ͷ�?

	// �ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� �������Դϴ�.
	int value = 10;

	void* ptr = &value;

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� �����ϴ�.
	// *ptr = 20; <- ERROR

	*(int*)ptr = 20;

	printf("ptr�� ����Ű�� �� : %d\n", *(int*)ptr);

	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ���
	// ���� �����Ͱ� ����Ű�� ������ �ڷ������� �� ��ȯ�� ���־�� �մϴ�.

	float decimal = 10.5;
	ptr = &decimal;

	*(float*) ptr = 20.5;
	printf("ptr�� ����Ű�� �� : %f\n", *(float*) ptr);

	// ���� �Լ��� �Է��ϴ� ������(����)�� ��µǵ��� �ϰ� ������
	// char(����) int(����) float(�Ǽ�)
	// Integer(10);
	// Character('A');
	// Decimal(10.5);

	int A = 10;
	float B = 20.5;
	char C = 'R';

	Function("int", &A);
	Function("float", &B);
	Function("char", &C);


	// �ΰ��� ������ ���� �ٲ��ּ���.
	// �ϳ��� �ӽ� ������ ���� �ű⿡ ���� �����ߴٰ� �ű�� �˴ϴ�.
	int A = 10;
	int B = 20;
	int temp = 0;
	printf("A�� B�� �� : %d, %d\n", A, B);


	temp = A;
	A = B;
	B = temp;

	printf("A�� B�� �� : %d, %d\n", A, B);


	// ���� ���� ȣ�⤡
	// �Լ� ȣ��� ���޵Ǵ� ������ ���� �����Ͽ�
	// �Լ��� ���ڷ� �����ϴ� ����Դϴ�.
	Swap(A, B);
	Add(10,2);
	Sub(5,5);
	Mul(20,4);
	div(10,2);
}

// char * name ----> [c]har
// void * value ----> A�� ���� �ּ�


void Function(char* name, void* value)
{
	printf("%p\n", name); // name ������ �����ּ� ex) 00FF55DA
	printf("%s\n", name); // name ������ ���ڿ� int == int

	// if���� �񱳵Ǵ� ������ %s�� �����մϴ�.
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
