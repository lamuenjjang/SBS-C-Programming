#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib,"winmm.lib")

enum textColor
{
	BLACK,
	BLUE,
	GREEN,
	SILVER,
	RED,
	OFTEN,
	YELLOW,
	WHITE,
	GRAY
};

void CursorActive()
{
	CONSOLE_CURSOR_INFO cursor;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);

	// .bVisible = Ŀ�� ���� ���ο� ���� ����
	// 0�� �� ���콺 Ŀ�� ��Ȱ��ȭ
	// 1�� �� ���콺 Ŀ�� Ȱ��ȭ
	cursor.bVisible = 0;

	// SetConsoleCursorInfo	= �����Ǿ� �ִ� �ܼ� ��ũ�� ���ۿ� ���Ͽ� Ŀ���� ���¸� �����ϴ� �Լ��Դϴ�.
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}


int main()
{
	// ���� ����
	/*
	// fopen( )
	// ù ��° �Ű����� : �ؽ�Ʈ ������ �̸�
	// �� ��° �Ű����� : �ؽ�Ʈ ������ ����� ��� (read / write)
	FILE * filePointer = fopen("data.txt", "w");
	// fputs : ���Ͽ� ���ڸ� �ϳ��� ���� �Լ��Դϴ�.
	fputs("ü��\n", filePointer);
	fputs("����\n", filePointer);
	fputs("���ݷ�\n", filePointer);
	// ������� ������ �ݾ��ݴϴ�.
	fclose(filePointer);
	*/

	// ���� �б�
	/*
	FILE* readPointer = fopen("Resources/Dragon.txt", "r");
	// text ������ ���� �����͸� ���� �� �ִ� ���۸� �����մϴ�.
	char buffer[10000] = { 0, };
	// ù ��° �Ű����� : �б� ���� ���� �迭�� �����մϴ�.
	// �� ��° �Ű����� : ũ�⸦ ������ �迭�� ����Ű�� ������
	// �� ��° �Ű����� : �о���� ������ ũ��� ������ ����Ʈ�Դϴ�.
	// �� ��° �Ű����� : �����͸� �Է¹��� ��Ʈ���� FILE ��ü�� ����Ű�� ������
	fread(buffer, 1, 10000, readPointer);
	printf("%s", buffer);
	fclose(readPointer);
	*/

	/*
	// ����� 1 byte�� ǥ���մϴ�.
	// 0 ~ 255 (256)������ �����͸� ǥ���� �� �ֽ��ϴ�.
	// ����� �ƽ�Ű �ڵ� ü��
	char array[ ] = "Hello";
	// �ѱ��� 2 byte�� �����͸� ǥ���մϴ�.
	// �ʼ� 19��, �߼� 21��, ���� 28�ڷ� �̷������ 11172�ڸ� ǥ���ϰ� �˴ϴ�.
	// �ѱ��� ���� �ڵ� ü��
	char korean[ ] = "�ȳ��ϼ���";
	*/

	// SetConsoleTextAttribute : �ؽ�Ʈ�� ������ �ٲ��ִ� �Լ�
	// 0 = ������
	// 1 = �Ķ���

	CursorActive();

	// ���� ȣ��
	// PlaySound�� wav ���ϸ� ��� �����մϴ�.
	PlaySound(TEXT("Sound.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP);

	while (1)
	{

	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);

	return 0;
}
