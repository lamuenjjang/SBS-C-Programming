#include <stdio.h>
#include <Windows.h>
#include <conio.h>

void init();
void titleScreen();
void menuScreen();
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
    init();
    titleScreen();
    Sleep(5000);
    menuScreen();
    setcursortype(NOCURSOR);
    int x = 0, y = 0;
    char ch;
    gotoxy(x, y);
    printf("C");
    while (1)
    {
        ch = _getch();

        gotoxy(x, y);
        printf(" ");
        switch (ch)
        {
        case 'w':
            if (y > 0) y--;
            break;
        case 's':
            if (y < 24) y++;
            break;
        case 'a':
            if (x > 0) x--;
            break;
        case 'd':
            if (x < 79) x++;
        }
        gotoxy(x, y);
        printf("C");
    }

    return 0;
}

void init()
{
    system("mode con cols=100 lines=40 | title  Legend of C");
}

void titleScreen()
{
    printf("\n\n\n\n");
    printf("        #       ######  ###### ###### #    #  ####                               #####      \n");
    printf("        #       #       #      #      ##   #  #   #                            ##     ##    \n");
    printf("        #       #       #      #      # #  #  #    #                          #         #   \n");
    printf("        #       #####   #  ### #####  # #  #  #    #        #### ####         #             \n");
    printf("        #       #       #    # #      #  # #  #    #        #  # #            #         #   \n");
    printf("        #       #       #    # #      #   ##  #   #         #  # ####          ##     ##    \n");
    printf("        ######  ######  #####  ###### #    #  ####          #### #               #####      \n");
}

void menuScreen()
{
    gotoxy(45 - 2, 16);
    printf("> 게 임 시 작 ");
    gotoxy(45 , 18);
    printf("게 임 정 보 ");
    gotoxy(45 , 20);
    printf("   종 료    ");
}