#pragma once


struct result;
typedef struct result result;

//Деструктор структуры result.
result* Destructor(result* obj);
//Конструктор структуры result.
result* Constructor();

/*
* @return будет ли стипендия у студента
* @param obj использует все оценки студента
*/
void stipendia(result* obj);

/*
* @return пишет будет ли добавка к стипендии
* @param obj использует все оценки студента
*/
void dopstependia(result* obj);

/*
* @return пишет на какие предметы надо пересдать
* @param obj использует все оценки студента
*/
void peresdacha(result* obj);

/*
* @return отвечает отчислен ли студент
* @param obj использует все оценки студента
*/
void otchislien(result* obj);

/*
* @return возращает минимальную оценку
* @param obj использует все оценки студента
*/
float minimum_rating(result* obj);
