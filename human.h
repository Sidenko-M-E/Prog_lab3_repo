#include "FIO.h"

//Защита от переопределения структуры
#ifndef HUMAN_H
#define HUMAN_H

struct human {
	int id;		//id
	int age;	//возраст
	float weight; //вес
	float height; //рост
	char gender;  //пол
	FIO human_FIO;	  //подструктура ФИО
};

//Функция вывода структуры в консоль
void PrintHuman(human buf_human);

//Функция инициализации структуры
human CreateHuman(int buf_id, int buf_age, float buf_weight, float buf_height, char buf_gender, FIO buf_FIO);

//Функция ввода полей структуры из консоли
human ConsoleCreateHuman();

#endif HUMAN_H
