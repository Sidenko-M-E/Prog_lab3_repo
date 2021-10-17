#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include "human.h"

//Защита от переопределения методов структуры
#ifndef HUMAN_CPP
#define HUMAN_CPP

//Метод установки id
bool human::SetId(int buf)
{
	if (buf < 0 || buf > 9999)
		return (true);
	else
	{
		id = buf;
		return (false);
	}
}

//Метод установки возраста
bool human::SetAge(int buf)
{
	if (buf < 0 || buf > 200)
		return (true);
	else
	{
		age = buf;
		return (false);
	}
}

//Метод установки роста
bool human::SetHeight(int buf)
{
	if (buf < 40 || buf > 300)
		return (true);
	else
	{
		height = buf;
		return (false);
	}
}

//Метод установки веса
bool human::SetWeight(float buf)
{
	buf = round(buf * 10) / 10;
	if (buf < 0 || buf > 650)
		return (true);
	else
	{
		weight = buf;
		return (false);
	}
}

//Метод установки пола
bool human::SetGender(char buf)
{
	if (buf == 'M' || buf == 'F')
	{
		gender = buf;
		return (false);
	}
	else
		return (true);
}

int human::GetId()
{
	return 0;
}

int human::GetAge()
{
	return 0;
}

int human::GetHeight()
{
	return 0;
}

float human::GetWeight()
{
	return 0.0f;
}

char human::GetGender()
{
	return 0;
}

bool human::Init(int buf_id, int buf_age, int buf_height, float buf_weight, char buf_gender, FIO buf_FIO)
{
	return false;
}

bool human::Read()
{
	return false;
}

void human::Display()
{
}


//Функция вывода структуры в консоль
void PrintHuman(human buf_human) 
{
	printf("id: %d\n", buf_human.id);
	printf("age: %d\n", buf_human.age);
	printf("weight: %0.1f\n", buf_human.weight);
	printf("height: %0.1f\n", buf_human.height);
	printf("gender: %c\n", buf_human.gender);
	buf_human.human_FIO.Display();
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

	new_human.human_FIO.Read();

	return new_human;
}

#endif HUMAN_CPP
