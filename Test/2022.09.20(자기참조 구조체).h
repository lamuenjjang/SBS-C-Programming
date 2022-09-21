#include <stdio.h>
#include <string.h> // ���ڿ� ���� �Լ�

// �ڱ� ���� ����ü
/*
struct Node
{
	int data;
	struct Node * pointer; // <- ����ü�� ����ų �� �ִ� ������ ����
};
*/

int main()
{
	// �ڱ� ���� ����ü��?
	/*
	// �ڽŰ� ������ ����ü�� ����ų �� �ִ� ������ ������
	// ��� ������ ������ ����ü�Դϴ�.
	struct Node node1 = { 10, NULL};
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };
	struct Node * structPtr = &node1;
	printf("ù ��° ����ü data�� �� : %d\n", structPtr->data);
	structPtr->pointer = &node2;
	printf("�� ��° ����ü data�� �� : %d\n", structPtr->pointer->data);
	structPtr->pointer->pointer = &node3;
	printf("�� ��° ����ü data�� �� : %d\n", structPtr->pointer->pointer->data);
	*/

	// ���ڿ� �Լ�	
	// strlen - (���ڿ��� ���̸� ����ϴ� �Լ�)
	char name[] = { "Bard" };
	printf("name�� �� : %s\n", name);

	// strlen( )�Լ��� ���ڿ��� ���̸� ���� �� NULL���� ������ ���ڿ� ���̸� ����մϴ�.
	printf("name�迭�� ���� : %d\n", strlen(name));

	// strcpy - (���ڿ��� �����ϴ� �Լ�)
	char A[10] = { "LEAGUE" };
	char B[10] = { "LEGEND" };

	// read only ������ �ִ� ���ڿ� ���ͷ��̱� ������ ���� ������ �� �����ϴ�.
	const char* C = "Player";
	const char* D = "Monster";

	/*
	// A �� B�� ���ڿ��� �����ּҸ� �ǹ��մϴ�.
	// 00FF44D0(A) <- 00DD22A0(B)
	int i = 0;
	while (A[i]) // NULL���ڴ� 0�� �ǹ��ϱ� ������
	{
		A[i] = B[i];
		i++;
	} // while���� ���� false�� ����˴ϴ�.
	printf("A�� ���ڿ��� : %s", A);
	*/

	// strcpy( )�Լ��� ù ��° �Ű������� ������� ���ڿ��Դϴ�.
	// strcpy( )�Լ��� �� ��° �Ű������� ������ ���ڿ��Դϴ�.

	// strcpy_s()�Լ��� ù ��° �Ű������� ������� ���ڿ��Դϴ�.
	// strcpy_s()�Լ��� �� ��° �Ű������� ������ �޸� ũ���Դϴ�.
	// strcpy_s( )�Լ��� �� ��° �Ű������� ������ ���ڿ��Դϴ�.
	strcpy_s(A, 10, B);
	printf("������ A ���ڿ��� �� : %s", A);

	// strcmp - (���ڿ��� ���ϴ� �Լ�)
	// strcat - (���ڿ��� �����ϴ� �Լ�)

	return 0;
}