#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "human.h"

//Защита от переопределения методов структуры
#ifndef HUMAN_CPP
#define HUMAN_CPP

//Функция вывода структуры в консоль
void PrintHuman(human buf_human) 
{
	printf("id: %d\n", buf_human.id);
	printf("age: %d\n", buf_human.age);
	printf("weight: %0.1f\n", buf_human.weight);
	printf("height: %0.1f\n", buf_human.height);
	printf("gender: %c\n", buf_human.gender);
	PrintFio(buf_human.human_FIO);
}

//Функция инициализации структуры
human CreateHuman(int buf_id, int buf_age, float buf_weight, float buf_height, char buf_gender, FIO buf_FIO)
{
	human new_human;
	new_human.id = buf_id;
	new_human.age = buf_age;
	new_human.weight = buf_weight;
	new_human.height = buf_height;
	new_human.gender = buf_gender;
	new_human.human_FIO = buf_FIO;

	return new_human;
}

//Функция ввода полей структуры из консоли
human ConsoleCreateHuman()
{
	human new_human;

	printf("Enter id:\n");
	scanf("%d", &(new_human.id));
	printf("Enter age:\n");
	scanf("%d", &(new_human.age));
	printf("Enter weight:\n");
	scanf("%f", &(new_human.weight));
	printf("Enter height:\n");
	scanf("%f", &(new_human.height));
	printf("Enter gender:\n");
	scanf("%s", &(new_human.gender));

	new_human.human_FIO = ConsoleCreateFIO();

	return new_human;
}

#endif HUMAN_CPP
