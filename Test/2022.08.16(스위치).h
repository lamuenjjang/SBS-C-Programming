#include <stdio.h>

/*
    void main()
    {
        ;   // �� ������
            // 1 = ��
            // 0 = ����

            // && (AND) : �ΰ��� ������ ��� ���̶�� ������ �����մϴ�.
            // || (OR)  : �ΰ��� �����߿� �ϳ��� ���̶�� ������ �����մϴ�.

            /*
            int x = 10;
            int y = 20;

            if (x == 10 && y == 20)
            {
                printf("�� ���� AND�� ���Դϴ�.\n");
                if (5 < 10)
                {
                    printf("if ���ȿ� �ִ� ���ǹ��Դϴ�.\n");
                }
            }
            if (x == 10 || y == 20)
            {
                printf("�� ���� OR�� ���Դϴ�.\n");
            }*/

            // ��и�

            /*
            // �� 1 ��и� (+x, +y)
            // �� 2 ��и� (-x, +y)
            // �� 3 ��и� (-x, -y)
            // �� 4 ��и� (+x, -y)

            // X ���� (X[0], y)
            // Y ���� (X, y[0])
            // ����   (X[0], y[0])

            int x = -2;
            int y = 10;

            if (x > 0 && y > 0)
            {
                printf("�� 1 ��и�");
            }
            else if (x < 0 && y > 0)
            {
                printf("�� 2 ��и�");
            }
            else if (x < 0 && y < 0)
            {
                printf("�� 3 ��и�");
            }
            else if (x > 0 && y < 0)
            {
                printf("�� 4 ��и�");
            }
            else if (x == 0 && y != 0)
            {
                printf("x ����");
            }
            else if (x != 0 && y == 0)
            {
                printf("y ����");
            }
            else
            {
                printf("����");
            }
        */

        // switch 
        // � ����� ���� �� ������� ����Ǵ� ���ǹ��Դϴ�.

        /*
        int value = 0;

        // break��
        // Ư���� �������� �б⸦ Ż���ϴ� ����Դϴ�.
        switch (value)
        {
        case 0: printf("0�Դϴ�.");
            break;
        case 1: printf("1�Դϴ�.");
            break;
        default: printf("�߸������߽��ϴ�.");

        }

        //���м���ǥ
        //A�� 100�� ~ 90��
        //B�� 90�� ~ 80��
        //C�� 80�� ~ 70��
        //D�� 70�� ~ 60��
        //E�� 60�� ~ 50��
        //�����Դϴ�.

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
            case 'A':  printf("100�� ~ 90��");
                break;
            case 'B': printf("90�� ~ 80��");
                break;
            case 'C': printf("80�� ~ 70��");
                break;
            case 'D': printf("70�� ~ 60��");
                break;
            case 'E': printf("60�� ~ 50��");
                break;
            default : printf("�����Դϴ�.");
        }

    }*/
