
/*
#include <iostream>
#include <list>
using namespace std;

int main()
{
	// STL 리스트
	
	// 각 노드가 데이터와 포인터를 가지고 한 줄로 연결된 방식으로 데이터를 저장하는
	// 자료구조입니다.

	list<int> list1;
	list1.push_front(5); // push_front : 맨 앞에 데이터를 추가함
	list1.push_back(10); // push_back : 맨 뒤에 데이터를 추가함
	list1.push_back(9);
	list1.push_back(11);
	list1.push_back(2);
	list1.push_back(1);
	list1.push_back(100);
	list1.push_back(20);
	list1.sort(); // list에 있는 데이터를 오름차순으로 정렬합니다.
	list1.clear(); // list안에 있는 모든 데이터를 삭제합니다.

	// list는 연속적인 메모리 공간이 아니기 때문에
	// 인덱스로 접근이 불가능합니다.
	for (int element : list1)
	{
		cout << element << endl;
	}
	

	
	int re,num=0, sum=0;
	char str[255];
	cin >> re;
	for (int i = 0; i < re; i++)
	{
		cin >> str[i];
	}


	for (int i = 0; i < re; i++) {
		num += str[i]-'0';
	}

	cout << num;
	
	return 0;
}*/