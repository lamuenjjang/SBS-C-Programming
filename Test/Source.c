#include <stdio.h> 
int main(void)
{
}



/*/#include <stdio.h>

// �������̶�?

// �ݵ�� �ϳ��� ���� ������ �� �������� ����ü�Դϴ�.

// Day��� ��������	�����˴ϴ�.
// �������� ��������� ������ �� �����ϴ�.

enum State
{
	// ������ �ʱⰪ�� ������� ������
	// ���� ó���� �ִ� ������ ��� ������ 0 �̶�� ������ �ʱ�ȭ �˴ϴ�.
	Idle, // <- ���� ���� ������ ������ ������ ù��° �����Դϴ�.
	Jump, // �������� ���� ������ �� ������, �� �ڿ� �ִ� ������ ��� �������� ���� �Բ� �ٲ�ϴ�.
	Attack,
	Death
};
int main()
{
	
	enum State state;

	state = Idle;

	switch (state)
	{
	case Idle: printf("��� ����");
		break;
	case Attack: printf("���� ����");
		break;
	case Jump: printf("���� ����");
		break;
	case Death: printf("���� ����");
		break;
	}
	return 0;
}*/