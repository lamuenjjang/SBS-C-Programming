/*
#include <stdio.h>
#include <math.h> // ���а��� �������

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
	
	// int main() �Լ��� �����Ҷ� ������ ���� �����ϰڴٴ� �ǹ��Դϴ�.
	// �ü������ ���α׷��� ���� ������ ������ �ִ� ���Դϴ�.

	// 0�� �����ϰ� �Ǹ� ���α׷��� ���������� ������ ��ġ�� �����ϴ� ������ �Ǵ��մϴ�.
	// 0 �̿ܿ� ���� �����ϰ� �Ǹ� ������������ �����ϴ� ������ �Ǵ��մϴ�.

	// void main() �Լ��� ������ �� �ƹ� ���� �������� �ʰڴٴ� �ǹ��Դϴ�.


	// ��Ʈ, ������
	
	int value = 49;
	printf("��Ʈ�� �� : %lf\n", sqrt(value));


	int variable = 10;
	printf("variable�� ������ : %lf\n", pow(variable, 2));
	

	// �� �� ������ �Ÿ�
	
	struct Player Character = {0,0};
	struct Monster dragon = {3,5};

	// Character�� Dragon�� �Ÿ��� �����ּ���.

	double result = sqrt((pow(Character.x - dragon.x, 2) + pow(Character.y - dragon.y, 2)));

	printf("Character�� Dragon�� �Ÿ� : %lf\n",result);
	

	// Lvalue vs Rvalue?
	
	// Lvalue��?
	// ǥ���� ���Ŀ��� ������� �ʴ� ���̸�, �̸��� ���ϰ� �ִ� �����Դϴ�.

	// Rvalue��?
	// ǥ���� ���Ŀ� ������� ���̸�, �ӽ� �����Դϴ�.

	// 10, 20 <- Rvalue
	// a, b	<- Lvalue
	// Lvalue�� Rvalue�ε� ����� �� �ֽ��ϴ�.
	int a = 10;
	int b = 20;

	int result = a + b;

	// Lvalue�� ����� ����� �� �����ϴ�.
	// 10 = a;

	printf("result ������ �� : %d", result);

	// ���� ����, ���� ����
	// ���� �������� ��쿡�� Lvalue�� Rvalue�� ����� �� �ֽ��ϴ�.
	// ���� �������� ��쿡�� Rvalue�θ� ����� �����մϴ�.

	int x = 0;
	int y = 0;

	// ���� ������ ������ �ڱ� �ڽ�(����)�� ��ȯ�մϴ�.
	++y;

	// ���� ������ ������ ���纻�� ��ȯ�մϴ�.
	x++;
	

	// [0] [0] [0] [0] [0]
	int room[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}
	printf("\n");

	// room�̶�� �̸��� �迭�� �����ּҸ� �ǹ��մϴ�.
	;	parameterArray(room);
	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}



	return 0;
}*/