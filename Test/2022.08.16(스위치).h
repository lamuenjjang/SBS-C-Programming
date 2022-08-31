#include <stdio.h>

/*
    void main()
    {
        ;   // 논리 연산자
            // 1 = 참
            // 0 = 거짓

            // && (AND) : 두개의 조건이 모두 참이라면 조건을 실행합니다.
            // || (OR)  : 두개의 조건중에 하나라도 참이라면 조건을 실행합니다.

            /*
            int x = 10;
            int y = 20;

            if (x == 10 && y == 20)
            {
                printf("논리 연산 AND가 참입니다.\n");
                if (5 < 10)
                {
                    printf("if 문안에 있는 조건문입니다.\n");
                }
            }
            if (x == 10 || y == 20)
            {
                printf("논리 연산 OR이 참입니다.\n");
            }*/

            // 사분면

            /*
            // 제 1 사분면 (+x, +y)
            // 제 2 사분면 (-x, +y)
            // 제 3 사분면 (-x, -y)
            // 제 4 사분면 (+x, -y)

            // X 절편 (X[0], y)
            // Y 절편 (X, y[0])
            // 원점   (X[0], y[0])

            int x = -2;
            int y = 10;

            if (x > 0 && y > 0)
            {
                printf("제 1 사분면");
            }
            else if (x < 0 && y > 0)
            {
                printf("제 2 사분면");
            }
            else if (x < 0 && y < 0)
            {
                printf("제 3 사분면");
            }
            else if (x > 0 && y < 0)
            {
                printf("제 4 사분면");
            }
            else if (x == 0 && y != 0)
            {
                printf("x 절편");
            }
            else if (x != 0 && y == 0)
            {
                printf("y 절편");
            }
            else
            {
                printf("원점");
            }
        */

        // switch 
        // 어떤 결과에 따라 그 결과부터 실행되는 조건문입니다.

        /*
        int value = 0;

        // break문
        // 특정한 시점에서 분기를 탈출하는 제어문입니다.
        switch (value)
        {
        case 0: printf("0입니다.");
            break;
        case 1: printf("1입니다.");
            break;
        default: printf("잘못선택했습니다.");

        }

        //대학성적표
        //A는 100점 ~ 90점
        //B는 90점 ~ 80점
        //C는 80점 ~ 70점
        //D는 70점 ~ 60점
        //E는 60점 ~ 50점
        //과락입니다.

        char alphabet;
        int grade = 98;

        if (grade <= 100 && grade > 90)
        {
            alphabet = 'A';
        }
        else if (grade <= 90 && grade > 80)
        {
            alphabet = 'B';
        }
        else if (grade <= 80 && grade > 70)
        {
            alphabet = 'C';
        }
        else if (grade <= 70 && grade > 60)
        {
            alphabet = 'D';
        }
        else if (grade <= 60 && grade > 50)
        {
            alphabet = 'E';
        }

        switch (alphabet)
        {
            case 'A':  printf("100점 ~ 90점");
                break;
            case 'B': printf("90점 ~ 80점");
                break;
            case 'C': printf("80점 ~ 70점");
                break;
            case 'D': printf("70점 ~ 60점");
                break;
            case 'E': printf("60점 ~ 50점");
                break;
            default : printf("과락입니다.");
        }

    }*/
