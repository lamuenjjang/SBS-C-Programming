#include <stdio.h> // <> ���̺귯�� ��� ������ �����ö� ����մϴ�.
#include "Function.h" // ""����� ���� ��� ������ ���� �� �� ����մϴ�.

// ��ũ�ζ�?
/*
// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� �����Դϴ�.
#define PI 3.14

// ��ũ�δ� �ڷ����� �����Ƿ� �޸𸮸� �������� �ʽ��ϴ�.

// ��ũ�ο����� ;�� �ʿ����� �ʽ��ϴ�.

// ��ũ�� �Լ��� �ڷ����� �����Ƿ� �޸� ������ Ȯ������ �ʽ��ϴ�.
#define Solution(x,y) x*y 

#define ANDROID 1
#define IOS 0
*/

// ����ü
struct Character
{
	//
	int health;
	float weight;
	const char* name;
	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ �� �� �����ϴ�.
};


void main()
{
	// ��ó�����?
	/*
	// ���α׷��� ������ �Ǳ� ������ ���α׷��� ���� ���� ó���ϴ� �����Դϴ�.

	int result = Function(10,20);

	printf("result ������ �� : %d\n",result);

	// ��ũ�� ������ ����̰�, �޸� ������ ���� ������ ���� ������ �� �����ϴ�.
	// PI = 3.25; <- ERROR

	printf("PI�� �� : %f\n", PI);
	printf("Sollution �Լ��� ��� : %d\n", Solution(10, 20));
	int a = 1;
	int b = 2;
	printf("Sollution �Լ��� ��� : %d\n", Solution(a+1,b+1));
	                                     // 1+ (1 * 2) + 1
 */


	// ��ũ���� ����
	// ������ �������� ������� ���� �ʽ��ϴ�.

	// ���Ǻ� ������
	/*
	// ���ǿ� ���� ���� �κ��� ������ ���� ������ ������ �� �ֽ��ϴ�.
	// ���Ǻ� �������� #endif��	����ؼ� ������ �˴ϴ�.

#if IOS
	printf("ù��° �����Դϴ�.");
#elif 10 < 5
	printf("�ι�° �����Դϴ�.");
#else 
	printf("�� ������ �� Ʋ���ϴ�.");
#endif
*/

	// ����ü��?
	/*
	// �������� ������ �ϳ��� �������� ����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ���Դϴ�.
	struct Character leesin;

	leesin.health = 100;
	leesin.weight = 78.2f;
	leesin.name = "fury of dragon";

	printf("leesin�� ü�� : %d\n", leesin.health);
	printf("leesin�� �̸� : %s\n", leesin.name);
	printf("leesin�� ������ : %f\n", leesin.weight);

	// ����ü�� �ʱ�ȭ ����Ʈ�� ����� ����
	// ����ü ������ ����� ������ ������ ���ǵǾ���մϴ�.
	struct Character Alistar = {200, 100.5f,"Alistar"};

	printf("Alistar�� ü�� : %d\n", Alistar.health);
	printf("Alistar�� �̸� : %s\n", Alistar.name);
	printf("Alistar�� ������ : %f\n", Alistar.weight);
	*/

	// ���׼�
	// �ڿ��� �߿��� �ڱ� �ڽ��� ������ ���� �����
	// ��� ������ �� �ڱ� �ڽź��� ū ��
	int result = 0;
	int number = 0;

	scanf_s("%d",&number);

	for(int i = 1; i < number; i++)
	{ 
		if (number % i == 0)
		{
			result += i;
		}
	}
	if (result > number) 
	{
		printf("%d�� ���׼��Դϴ�.\n", number);
		printf("����� �� : %d, �Է¹����� : %d\n", result, number);
	}
	else
	{
		printf("%d�� ���׼��� �ƴմϴ�.\n", number);
		printf("����� �� : %d, �Է¹����� : %d\n", result, number);
	}
}