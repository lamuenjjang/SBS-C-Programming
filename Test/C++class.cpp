#include <stdio.h>

int main() 
{
	// ���� ����
	/*
	// �迭�� ��� ��Ҹ� �տ������� ���ʴ��
	// �̹� ���ĵ� �迭 �κа� ���Ͽ�, �ڽ��� ��ġ�� ã��
	// ������ ���ν� ������ �ϼ��ϴ� �˰����Դϴ�.
	int arr[5] = { 8,7,9,2,6};
	
	for (int i = 1; i < 5; i++) {
		int key = arr[i];
		for (int j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[i] = key;
	}
	
	for (int k = 0; k < 5; k++) {
		cout << arr[k] << endl;
	}
	*/

	// �ܾ� ����
	char str[255];
	int max = 0;
	char ans;
	gets_s(str);

	int alphabet[26] = { 0, };

	for (char* ptr = str; *ptr != '\0'; ptr++) {
		if (*ptr >= 65 && *ptr <= 90) {
			alphabet[*ptr - 65]++;
		}
		else if (*ptr >= 97 && *ptr <= 122) {
			alphabet[*ptr - 97]++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] == max) {
			ans = '?';
		}
		else if (alphabet[i] > max) {
			max = alphabet[i];
			ans = 'A' + i;
		}
	}

	printf("%c", ans);


	return 0;
}