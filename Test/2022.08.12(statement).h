#pragma once
#include <stdio.h>
/*
void main()
{
	// ��ȣ�� ���� �ڷ���
	unsigned char value = 255; // 0 ~ 255
	unsigned short variable;  // 0 ~ 65535

	printf("unsighned char�� �� : %d\n", value);

	// �Ǽ��� �����ϴ� ���
	// IEEE 754
	// float - 4 byte     32bits (������)
	// double - 8 byte    64bits (������)

	// ���� �Ҽ���
	// �Ҽ����� ����Ͽ� ������ �ڸ����� �Ҽ��� ��Ÿ���� ����Դϴ�.
	// [1]  [15] [16] < - 8 byte
	// ��ȣ ���� ����

	// �ε� �Ҽ���
	// �Ҽ����� ��ġ�� �������� �ʰ� �� ��ġ�� ��Ÿ����	���� ���� ���� ������ 
	// ��ȿ���ڸ� ��Ÿ���� ������ �Ҽ����� ��ġ�� Ǯ���ϴ� �����γ����� ǥ���ϴ� ���
	// [1]  [8]  [23] <- 4 byte (���е� �Ҽ��� 6�ڸ���)
	// [1]  [13] [52] <- 8 byte (���е�	�Ҽ��� 15�ڸ���)
	// ��ȣ ���� ���� 


	float pi = 0.3;
	double rotation = 1.25;

	// 9.25 = 1001.01
	//1.00101 x 2^3
	// ù��°�� ����ȭ (�Ҽ����� �������� �̵����� �����ΰ� ���ڸ����� �ǵ��� �ű�� �����Դϴ�.)
	// (�̵���Ų �ڸ��� ��Ů�� 2�������� �����ݴϴ�.)
	// 
	// bais = (float 127), (double 1023)
	// 3 + 127 = 130
	// 1000 0010

	// [0] [10000010] [10010100000000000000000]

	// 4 == 4 ok
	// 4.71 == 4.71no

	// ���е�
	// float �������� ǥ���� �� �ִ� �� (�Ҽ��� 6 �ڸ���)
	// double �������� ǥ���� �� �ִ� �� (�Ҽ��� 15�ڸ���)
	printf("float ������ ����? : %.10f\n", pi); // �ε� �Ҽ��� ����
	printf("double ������ ����? : %.15lf\n", rotation);


	// ���� ������
	// 2���� ��ü���� Ư���� ������ ���踦 ���Ͽ� ���ϴ� ���� ����ϴ� �������Դϴ�.
	// ��ǻ�Ϳ����� 0�� ������ �ǹ��ϰ� 1�� ������ �ǹ��մϴ�.
	int a = 10 > 5;
	int b = 10 == 10;
	int c = 10 >= 10;

	printf("a�� ���� : %d\n", a);
	printf("b�� ���� : %d\n", b);
	printf("c�� ���� : %d\n", c);

	// ���ǹ�
	// if���� �������� else if���� ������ ���̶�� ���� �����ִ� ���ǹ��� ����˴ϴ�.
	// if���� �������� 0�� ���� �ʴ´ٸ� ����˴ϴ�.
	// if : � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ� ���ɹ��Դϴ�.
	if (0) // if���� ������ ���̸� if�� �� �ʿ� { }�κ��� ����˴ϴ�.
	{
		// if���� �����̸� if�� ���ʿ� �ִ� { }�κ��� ������� �ʽ��ϴ�.
		printf("ù��° ����");
	}
	else if (0)
	{
		// else if���� if���� ������ �����̶�� ������ ���Ͽ� �����ϴ� ���ǹ��Դϴ�.
		// else if���� ����ϱ� ���ؼ��� if���� ����� ���� ����� �� �ֽ��ϴ�.
		printf("�ι�° ����");
	}
	else if (0)
	{
		printf("����° ����");
	}
	else
	{
		// else : if���� ���ǰ� else if���� ������ �� �� �����̶�� ����Ǵ� ���ǹ��Դϴ�.
		printf("if���� ���ǰ� else if���� ������ ��� Ʋ���ϴ�.\n");
	}



	if (1)
	{
		printf("�ι�° if���Դϴ�\n");
	}
	if (1)
	{
		printf("����° if���Դϴ�\n");
	}

	// switch : � ����� ���� �� ������� ����Ǵ� ���ɹ��Դϴ�.
	// go to
}*/