#pragma once
#include <stdio.h>

struct Object
{
	// ����ü�� ���� �س��� ���´� �޸𸮰� �������� �ʽ��ϴ�.
	short size;	// 2 BYTE 
	int height;	// 4 BYTE
	double position; // 8 BYTE
};

struct Monster
{
	int health;	// 4 BYTE
	double attack; // 8 BYTE
	short defense; // 2 BYTE
};


struct Data
{
	int x; // 4 byte
	int y; // 4 byte
};

struct Shape
{
	char name[10]; // 10 BYTE
	double size;  // 8 BYTE

	// [][][][][][][][] / [][](6byte padding) / size 8byte ����
};

struct Animal
{
	int leg;
	double size;
};

int main()
{
	// ����Ʈ �е��̶�?
	/*
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
	// �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.
	// ����ü�� ��� �������־�� ��� ������ �޸𸮰� ����Ƿ�
	// ��� ������ �����͸� �ʱ�ȭ�� �� �ֽ��ϴ�.
	struct Object character = { 10, 100, 3.5f };
	struct Data data = { 10,10 };
	// ����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ
	// �ٸ��� ������ �� ������, ����ü ũ�⸦ �����ϴ� ���´�
	// �⺻ �ڷ������θ� �����˴ϴ�.
	struct Monster dragon = {100,30.5f,10};
	struct Shape circle;
	// const char * name ----> Circle
	// char [10] name ---> memcpy (�޸� ���� �Լ�)
	// "Cirle" --> name�̶�� �迭�� �޸𸮸� �����ؼ� �־��־�� �մϴ�.
	// circle.name = "Cirle";
	printf("Data ����ü�� ũ�� : %d\n", sizeof(data));
	printf("Object ����ü�� ũ�� : %d\n", sizeof(character));
	printf("Monster ����ü�� ũ�� : %d\n", sizeof(dragon));
	printf("Shape ����ü�� ũ�� : %d\n", sizeof(circle));
	// align ��Ģ
	// CPU�� �����͸� ���� ��
	// Ȧ�� (x) 3 byte, 5 byte / ¦�� (o) 2 byte, 4 byte, 8 byte, 12 byte, 16 byte
	// 32bit OS������ 4 byte�� �޸𸮸� �а�, 64bit OS������ 8 byte�� �޸𸮸� �н��ϴ�.
	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿�
	// ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
	*/

	// ����ü �����Ͷ�?
	/*
	// ����ü�� ����Ű�� �������Դϴ�.
	// ����ü ������ ����
	struct Animal * pointer;
	printf("����ü �������� ũ�� : %d\n", sizeof(pointer));
	struct Animal cat;
	// ����ü �ּҴ� ����ü ù��° ��� ������ �ִ� ���� �ּҸ� �ǹ��մϴ�.
	printf("����ü cat�� �ּ� : %p\n", &cat);
	printf("����ü cat�� leg �ּ� : %p\n", &cat.leg);
	printf("����ü cat�� size �ּ� : %p\n", &cat.size);
	pointer = &cat;
	// ����ü �����ͷ� ����ü�� �ִ� �޸𸮿� ������ ����
	// -> �����ڸ� ����ؾ� �մϴ�.
	pointer->leg = 200;
	pointer->size = 90.3f;
	// ��� �����ڸ� ����Ϸ��� ������ �켱 ������ ���߾� �ۼ����ָ� �˴ϴ�.
	(*pointer).leg = 400;
	(*pointer).size = 50.6f;
	printf("����ü �����ͷ� ������ leg�� �� : %d\n", pointer->leg);
	printf("����ü �����ͷ� ������ size�� �� : %lf\n", pointer->size);
	*/

	// C ��� ���� �Ⱓ 2�� 

	return 0;
}