/*
#include<iostream>
#include<stack>
using namespace std;

int stackArray[5];
int top = -1;
int* ptr = stackArray;

int Empty()
{
	if (top == -1)
	{
		return 1;
	}
	else if (top != -1)
	{
		return 0;
	}
}


void Push(int x)
{
	stackArray[++top] = x;
}

int Pop()
{
	return stackArray[top--];
}

int Size()
{
	return top + 1;
}

int Top()
{
	return stackArray[top];
}

int main()
{
	std::stack<int> Stack;
	


	Push(1);
	Push(3);
	Push(5);
	cout << Empty() << endl;
	cout << Size() << endl;
	cout << Top() << endl;

	cout << Pop() << endl;
	cout << Pop() << endl;

	cout << Empty() << endl;
	cout << Size() << endl;
	cout << Top() << endl;

	cout << Pop() << endl;
	// 1. pop
	// 2. push
	// 3. size
	// 4. empty : Stack�� ������ ����ִٸ� 1�� ��ȯ�մϴ�.
	//            Stack�� �����Ͱ� �ִٸ� 0�� ��ȯ�մϴ�.
	// 5. top

	return 0;
}*/