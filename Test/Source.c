#include <stdio.h>

void main() 
{
	//������
	/*
	for (int i = 2; i <= 9; i++) 
	{
		printf("%d ��\n",i);
		for (int j = 1; j <= 9; j++) 
		{
			printf(" %d x %d = %d\n",i,j,i*j);
		}
	}*/

	// while��
	/*
	// Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	
	int memory = 100;

	while (memory > 1)
	{
		printf("���ǹ��� ���Դϴ�.\n");
		break;
	}*/

	// do while��
	/*
	// ���ǰ� ������� �� ���� �۾��� ������ ���� ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	int value = 5;

	do
	{
		// do���� ������ ������ while�� �������� ����� �� �����ϴ�.
		// int x = 10;

		printf("������ �����Դϴ�.\n");
		value++;
	} while (value < 10);
	*/
	
	// continue��
	/*
	// �ش� ���ǹ��� �������� �ʰ� �ݺ����� �̾ �����ϴ� ����Դϴ�.

	for (int i = 1; i < 11; i++)
	{
		if (i % 3 == 0) 
			continue;
		
		printf("%d ",i);
	}*/

	// �� ��ȯ�̶�?
	/*
	// ���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� �� ������ �����ߴ� 
	// �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� �����̴�.

	// 1.�ڵ� �� ��ȯ 2. ����� �� ��ȯ
	// C ������ ������ ������ �����ϰ� �Ǹ� ������ ������ ���� ���� �� �ֽ��ϴ�.

	// �Ϲ����� �� ��ȯ
	// ���� �ٸ� �ڷ������� ������ �̷�� �� �� �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� �����Դϴ�.

	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("short�� ũ�� : %d\n", sizeof(short));
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("long�� ũ�� : %d\n", sizeof(long));
	printf("float�� ũ�� : %d\n", sizeof(float));

	char x = 10;
	short y = 20;

	// 30 = 4 byte (int) + 4 byte (int)
	int sum = x + y;

	int z = 500; // [] [] [] []
	char temp = z; // []

	printf("temp�� �� : %d\n", temp);

	//����� �� ��ȯ
	int p0 = 10;
	int p1 = 3;

	// result <- p0 float / p1 float
	float result = (float) p0 / p1;
	printf("result�� �� : %f", result);

	// int�� long�� ����
	// int�� 32��Ʈ �ü���� 64��Ʈ �ü�������� 4 Byte�� ũ�⸦ �����ϴ�.
	
	// long�� 32��Ʈ �ü�������� 4 Byte�̰� 64��Ʈ �ü�������� 8 Byte�� ũ�⸦ �����ϴ�.
	// ��, long�� �������� 64��Ʈ �ü�������� 4 Byte�Դϴ�.
	*/
}