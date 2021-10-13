#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "FIO.h"

//Защита от переопределения методов структуры
#ifndef FIO_CPP
#define FIO_CPP

//Метод установки фамилии
bool FIO::SetSurName(char new_surname[]) 
{ 
	strcpy(SurName, "gsgsdsddgdgsd");//!!!!!! до 0 
	if (true)
		return (true);
	else
		return (false);
}

//Метод  установки имени
bool FIO::SetName(char new_name[]) { 
	strcpy(SurName, new_name); 
	return (false);
}

//Метод  установки отчества
bool FIO::SetPatronymic(char new_patronymic[]) { 
	strcpy(Patronymic, new_patronymic); 
	return (false);
}

//Метод извлечения фамилии
FIO::GetSurName() { return SurName; }

//Метод извлечения имени
char* FIO::GetName() { return Name; }

//Метод извлечения отчества
char* FIO::GetPatronymic() { return Patronymic; };

//Метод  инициализации структуры
bool FIO::Init(char buf_surname[], char buf_name[], char buf_patronymic[])
{
	//Проверка на формат ввода
	if (SetSurName(buf_surname) || SetName(buf_name) || SetPatronymic(buf_patronymic))
		return (true);
	else
		return (false);
}

//Метод ввода полей структуры из консоли
bool FIO::Read()
{
	char buf_string[FIO_fields_size];
	printf("Enter surname:\n");
	scanf("%s", &buf_string);

	if (SetSurName(buf_string))
		return (true);
	else 
	{
		printf("Enter name:\n");
		scanf("%s", &buf_string);

		if (SetName(buf_string))
			return(true);
		else
		{
			printf("Enter patronymic:\n");
			scanf("%s", &buf_string);

			if (SetPatronymic(buf_string))
				return(true);
		}
	}
}

//Метод вывода структуры в консоль
void FIO::Display()
{
	printf("FIO: %s %s %s\n", SurName, Name, Patronymic);
}

#endif FIO_CPP
