#pragma once


struct result;
typedef struct result result;

//���������� ��������� result.
result* Destructor(result* obj);
//����������� ��������� result.
result* Constructor();

/*
* @return ����� �� ��������� � ��������
* @param obj ���������� ��� ������ ��������
*/
void stipendia(result* obj);

/*
* @return ����� ����� �� ������� � ���������
* @param obj ���������� ��� ������ ��������
*/
void dopstependia(result* obj);

/*
* @return ����� �� ����� �������� ���� ���������
* @param obj ���������� ��� ������ ��������
*/
void peresdacha(result* obj);

/*
* @return �������� �������� �� �������
* @param obj ���������� ��� ������ ��������
*/
void otchislien(result* obj);

/*
* @return ��������� ����������� ������
* @param obj ���������� ��� ������ ��������
*/
float minimum_rating(result* obj);
