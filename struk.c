#include "struk.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



struct result
{
    int mathematical_analysis;  // оценка по матанализу
    int algebra;    // оценка по алгебре
    int informatics;// оценка по информатике 
    int TOI;        // оценка по ТОИ
    int history;    // оценка по истории
};


struct result* Constructor()
{
    struct result* obj = (struct result*)malloc(sizeof(struct result));
    if (!obj)
    {
        return NULL;

    }
    setlocale(LC_ALL, "Russian");
    // ввод оценок за предметы
    printf("Оценка не выше 5!!!!\n\n\n ");
    printf("Введите оценку по мат.анализу: ");
    scanf_s("%d\n", &obj->mathematical_analysis);

    if (obj->mathematical_analysis > 5)
    {
        printf("Ошибка. Неверный рейтинг введен в матанализе: ");
        scanf_s("%d\n", &obj->mathematical_analysis);
    }


    printf("введите оценку по алгебре: ");
    scanf_s("%d\n", &obj->algebra);
    if (obj->algebra > 5)
    {
        printf("Ошибка. Введенный неверный рейтинг по алгебре: ");
        scanf_s("%d\n", &obj->algebra);
    }


    printf("введите оценку по информатике: ");
    scanf_s("%d\n", &obj->informatics);
    if (obj->informatics > 5)
    {
        printf("Ошибка. Неверный рейтинг введен в информатике: ");
        scanf_s("%d\n", &obj->informatics);
    }

    printf("Введите оценку по ТОИ: ");
    scanf_s("%d\n", &obj->TOI);
    if (obj->TOI > 5)
    {
        printf("Ошибка. Неверно введенный рейтинг ТОИ: ");
        scanf_s("%d\n", &obj->TOI);
    }

    printf("Введите оценку по истории: ");
    scanf_s("%d\n", &obj->history);
    if (obj->history > 5)
    {
        printf("Ошибка. Неверный рейтинг введен в истории: ");
        scanf_s("%d\n", &obj->history);
    }

    printf("\n\n\n");
    return obj;
}

// Подсчёт среднего балла
float minimum_rating(struct result* obj)
{
    float  srozenka;
    srozenka = (obj->mathematical_analysis + obj->algebra + obj->informatics + obj->TOI + obj->history) / 5;
    return srozenka;

}

// Будет ли получать стипендию студент
void stipendia(struct result* obj)
{
    if (obj->mathematical_analysis >= 4 && obj->algebra >= 4 && obj->informatics >= 4 && obj->TOI >= 4 && obj->history >= 4)
    {
        printf("Студент получает стипендию\n");
    }
    else
    {
        printf("Студент не получает стипендию\n");
    }
    printf("\n\n\n");
}
//допольнительная стипендия за все 5 
void dopstependia(struct result* obj)
{
    if (obj->mathematical_analysis >= 5 && obj->algebra >= 5 && obj->informatics >= 5 && obj->TOI >= 5 && obj->history >= 5)
    {
        printf("к стипендии добавляется 1000 рублей\n");
    }
    else
    {
        printf("К стипендии 1000 рублей не прибавляются\n");
    }
    printf("\n\n\n");
}

// какие предметы надо пересдавать 
void peresdacha(struct result* obj)
{
    printf("Peresdacha: \n");
    if (obj->mathematical_analysis <= 2)
        printf("Надо идти на пересдачу по матанализу\n");
    if (obj->algebra <= 2)
        printf("Надо идти на пересдачу по алгебре\n");
    if (obj->informatics <= 2)
        printf("Надо идти на пересдачу по информатике\n");
    if (obj->TOI <= 2)
        printf("Надо идти на пересдачу по ТОИ\n");
    if (obj->history <= 2)
        printf("Надо идти на пересдачу по истории\n");
    if ((obj->mathematical_analysis >= 3 && obj->algebra >= 3 && obj->informatics >= 3 && obj->TOI >= 3 && obj->history >= 3))
        printf("Не надо идти на пересдачу\n");
    printf("\n\n\n");
}

// oтчислен ли студент 
void otchislien(struct result* obj)
{
    if (obj->mathematical_analysis <= 2 && obj->algebra <= 2 && obj->informatics <= 2 && obj->TOI <= 2 && obj->history <= 2)
        printf("ОТчислен\n");
    else
    {
        printf(" Переведён на следующий курс\n");
    }
    printf("\n\n\n");
}

result* Destructor(struct result* obj)
{
    free(obj);
}