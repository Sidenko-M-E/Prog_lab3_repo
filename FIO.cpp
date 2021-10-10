#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "FIO.h"

//Защита от переопределения методов структуры
#ifndef FIO_CPP
#define FIO_CPP

//Функция установки фамилии
void SetSurName(FIO* edit_FIO, char new_surname[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		edit_FIO->SurName[i] = new_surname[i];
}

//Функция установки имени
void SetName(FIO* edit_FIO, char new_name[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		edit_FIO->Name[i] = new_name[i];
}

//Функция установки отчества
void SetPatronymic(FIO* edit_FIO, char new_patronymic[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		edit_FIO->Patronymic[i] = new_patronymic[i];
}

//Функция инициализации структуры
FIO CreateFIO(char buf_surname[], char buf_name[], char buf_patronymic[])
{
	FIO new_FIO;
	SetSurName(&new_FIO, buf_surname);
	SetName(&new_FIO, buf_name);
	SetPatronymic(&new_FIO, buf_patronymic);

	return (new_FIO);
}

//Функция вывода структуры в консоль
void PrintFio(FIO buf_FIO)
{
	printf("FIO: %s %s %s\n", buf_FIO.SurName, buf_FIO.Name, buf_FIO.Patronymic);
}

//Функция ввода полей структуры из консоли
FIO ConsoleCreateFIO()
{
	FIO new_FIO;
	printf("Enter surname:\n");
	scanf("%s", &(new_FIO.SurName));
	printf("Enter name:\n");
	scanf("%s", &(new_FIO.Name));
	printf("Enter partonymic:\n");
	scanf("%s", &(new_FIO.Patronymic));

	return new_FIO;
}

#endif FIO_CPP
