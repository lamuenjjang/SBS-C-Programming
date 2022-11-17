#include <iostream>
using namespace std;

void Plus(int x,int y) 
{
	cout << x + y << endl;
}


void Effect(int x,int y)
{
	cout << x * y << endl;
}

void Count(int x, int y)
{
	cout << x / y << endl;
}

int main()
{
	// ��ǰ ���� (bubble sort)
	/*
	// ���� ������ �� ������ ��Ҹ� ���ϰ�, ���ǿ� ����
	// �ʴٸ� �ڸ��� ��ȯ�ϴ� �˰����Դϴ�.
	
	// ��ǰ	������ �ð� ���⵵
	// O(n^2) 
	
	// ��ǰ ������ ���� ���⵵
	// O(n)

	int arr[5] = { 2,5,4,3,1 };
	printf("���� ��\n");
	for (int a = 0; a < 5; a++) {
		printf("%d\n",arr[a]);
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("���� ��\n");
	for (int a = 0; a < 5; a++) {
		printf("%d\n", arr[a]);
	}
	*/

	// ������ �켱����
	/*
	// ���� �� ��ǻ�� ���α׷��ֿ��� ������ �켱������
	// ��ȣ�ϰ� �ؼ������� ���Ŀ��� ��� ������
	// ���� ����� ������ �����ϴ� ��Ģ�Դϴ�.

	char charArray[6] = { "Korea" };
	char* charPtr = charArray;

	cout << (char) ( * charPtr + 1) << endl;

	// 1 ����
	// ����++, ����-- ���� ���� ������
	// () : �Լ� ȣ�� ������
	// [] : �迭 ÷��
	// .  : ��� ������
	// -> : ��� ������ ������
	
	// 2 ����
	// ++����, --���� ���� ���� ������
	// +,- : ���� ������
	// ! : �� ������
	// ~ : ��Ʈ ������
	// *�����ͺ��� : ������ ������
	// &���� : ������ �ּ�

	// 3 ����
	// * : ����
	// / : ������
	// % : ������

	// 4 ����
	// + : ����
	// - : ����
	
	// 5 ����
	// <<, >> : ����Ʈ ������
	// <,<=,>=,> : �� ������
	*/

	// �Լ� ������ �迭
	void (*funcPtr[3])(int, int);

	funcPtr[0] = Plus;
	funcPtr[1] = Effect;
	funcPtr[2] = Count;

	for (int i = 0; i < 3; i++) {
		funcPtr[i](10, 20);
	}
	return 0;
}