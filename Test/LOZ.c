#include <stdio.h>
#include <Windows.h>
#include <conio.h>

typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;

void gotoxy(int x, int y)
{
    COORD CursorPosition = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

void setcursortype(CURSOR_TYPE c)
{
    CONSOLE_CURSOR_INFO CurInfo;
    switch (c)
    {
    case NOCURSOR:
        CurInfo.dwSize = 1;
        CurInfo.bVisible = FALSE;
        break;
    case SOLIDCURSOR:
        CurInfo.dwSize = 100;
        CurInfo.bVisible = TRUE;
        break;
    case NORMALCURSOR:
        CurInfo.dwSize = 20;
        CurInfo.bVisible = TRUE;
        break;
    }
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}

int main()
{
    setcursortype(NOCURSOR);
    int x = 0, y = 0;
    char ch;
    gotoxy(x, y);
    printf("@");
    while (1)
    {
        ch = getch();

        gotoxy(x, y);
        printf(" ");
        switch (ch)
        {
        case 'w':
            if (y > 0) y--;
            gotoxy(x, y);
            printf("¡ã");
            break;
        case 's':
            if (y < 24) y++;
            gotoxy(x, y);
            printf("¡å");
            break;
        case 'a':
            if (x > 0) x--;
            gotoxy(x, y);
            printf("¢¸");
            break;
        case 'd':
            if (x < 79) x++;
            gotoxy(x, y);
            printf("¢º");
            break;
        }
    }
}