#include "struk.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



struct result
{
    int mathematical_analysis;  // ������ �� ����������
    int algebra;    // ������ �� �������
    int informatics;// ������ �� ����������� 
    int TOI;        // ������ �� ���
    int history;    // ������ �� �������
};


struct result* Constructor()
{
    struct result* obj = (struct result*)malloc(sizeof(struct result));
    if (!obj)
    {
        return NULL;

    }
    setlocale(LC_ALL, "Russian");
    // ���� ������ �� ��������
    printf("������ �� ���� 5!!!!\n\n\n ");
    printf("������� ������ �� ���.�������: ");
    scanf_s("%d\n", &obj->mathematical_analysis);

    if (obj->mathematical_analysis > 5)
    {
        printf("������. �������� ������� ������ � ����������: ");
        scanf_s("%d\n", &obj->mathematical_analysis);
    }


    printf("������� ������ �� �������: ");
    scanf_s("%d\n", &obj->algebra);
    if (obj->algebra > 5)
    {
        printf("������. ��������� �������� ������� �� �������: ");
        scanf_s("%d\n", &obj->algebra);
    }


    printf("������� ������ �� �����������: ");
    scanf_s("%d\n", &obj->informatics);
    if (obj->informatics > 5)
    {
        printf("������. �������� ������� ������ � �����������: ");
        scanf_s("%d\n", &obj->informatics);
    }

    printf("������� ������ �� ���: ");
    scanf_s("%d\n", &obj->TOI);
    if (obj->TOI > 5)
    {
        printf("������. ������� ��������� ������� ���: ");
        scanf_s("%d\n", &obj->TOI);
    }

    printf("������� ������ �� �������: ");
    scanf_s("%d\n", &obj->history);
    if (obj->history > 5)
    {
        printf("������. �������� ������� ������ � �������: ");
        scanf_s("%d\n", &obj->history);
    }

    printf("\n\n\n");
    return obj;
}

// ������� �������� �����
float minimum_rating(struct result* obj)
{
    float  srozenka;
    srozenka = (obj->mathematical_analysis + obj->algebra + obj->informatics + obj->TOI + obj->history) / 5;
    return srozenka;

}

// ����� �� �������� ��������� �������
void stipendia(struct result* obj)
{
    if (obj->mathematical_analysis >= 4 && obj->algebra >= 4 && obj->informatics >= 4 && obj->TOI >= 4 && obj->history >= 4)
    {
        printf("������� �������� ���������\n");
    }
    else
    {
        printf("������� �� �������� ���������\n");
    }
    printf("\n\n\n");
}
//��������������� ��������� �� ��� 5 
void dopstependia(struct result* obj)
{
    if (obj->mathematical_analysis >= 5 && obj->algebra >= 5 && obj->informatics >= 5 && obj->TOI >= 5 && obj->history >= 5)
    {
        printf("� ��������� ����������� 1000 ������\n");
    }
    else
    {
        printf("� ��������� 1000 ������ �� ������������\n");
    }
    printf("\n\n\n");
}

// ����� �������� ���� ����������� 
void peresdacha(struct result* obj)
{
    printf("Peresdacha: \n");
    if (obj->mathematical_analysis <= 2)
        printf("���� ���� �� ��������� �� ����������\n");
    if (obj->algebra <= 2)
        printf("���� ���� �� ��������� �� �������\n");
    if (obj->informatics <= 2)
        printf("���� ���� �� ��������� �� �����������\n");
    if (obj->TOI <= 2)
        printf("���� ���� �� ��������� �� ���\n");
    if (obj->history <= 2)
        printf("���� ���� �� ��������� �� �������\n");
    if ((obj->mathematical_analysis >= 3 && obj->algebra >= 3 && obj->informatics >= 3 && obj->TOI >= 3 && obj->history >= 3))
        printf("�� ���� ���� �� ���������\n");
    printf("\n\n\n");
}

// o������� �� ������� 
void otchislien(struct result* obj)
{
    if (obj->mathematical_analysis <= 2 && obj->algebra <= 2 && obj->informatics <= 2 && obj->TOI <= 2 && obj->history <= 2)
        printf("��������\n");
    else
    {
        printf(" �������� �� ��������� ����\n");
    }
    printf("\n\n\n");
}

result* Destructor(struct result* obj)
{
    free(obj);
}