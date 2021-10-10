//Защита от переопредления структуры
#ifndef FIO_H
#define FIO_H

#define _CRT_SECURE_NO_WARNINGS
#define FIO_fields_size 30

struct FIO {
	char SurName[FIO_fields_size]; //Фамилия
	char Name[FIO_fields_size]; //Имя
	char Patronymic[FIO_fields_size]; //Отчество
};

//Функция установки фамилии
void SetSurName(FIO* edit_FIO, char new_surname[]);

//Функция установки имени
void SetName(FIO* edit_FIO, char new_name[]);

//Функция установки отчества
void SetPatronymic(FIO *edit_FIO , char new_patronymic[]);

//Функция инициализации структуры
FIO CreateFIO(char buf_surname[], char buf_name[], char buf_patronymic[]);

//Функция вывода структуры в консоль
void PrintFio(FIO buf_FIO);

//Функция ввода полей структуры из консоли
FIO ConsoleCreateFIO();

#endif FIO_H
