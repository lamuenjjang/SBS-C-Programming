/*
#include <iostream>

using namespace std;

int buffer[6];

class CircleQueue
{
private:
	int front = 6 - 1; // 배열의 최대 크기 - 1
	int rear = 6 - 1; // 배열의 최대 크기 - 1
public:
	bool Empty()
	{
		if (front == rear)
			return true;
		else
			return false;
	}
	void Push(int value)
	{
		if (isFull() == true) {
			cout << "현재큐에 데이터를 넣을 수 없습니다" << endl;
		}
		else {
			rear = (rear + 1) % 6;
			buffer[rear] = value;
		}
	}
	bool isFull()
	{
		if ((rear + 1) % 6 == front)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int Pop()
	{
		front = (front + 1) % 6;

		int temp = buffer[front];

		buffer[front] = 0;

		return temp;
	}
};
int main()
{
	CircleQueue queue;
	queue.Push(1);
	queue.Push(2);
	queue.Push(3);
	queue.Push(4);
	queue.Push(5);
	queue.Push(6);
	queue.Push(7);
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", buffer[i]);
	}
	return 0;
}*/