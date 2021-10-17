#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "student.h"

//Метод установки курса обучения
bool student::SetCourse(int buf)
{
	if (buf < 0 || buf > 6)
		return (true);
	else
	{
		course = buf;
		return (false);
	}
}

//Метод установки учебной программы
bool student::SetEduProg(char buf_string[])
{
	//обрезка входной строки
	if (strlen(buf_string) > (FIO_fields_size / 3 * 2))
		buf_string[(FIO_fields_size / 3 * 2) - 1] = '\0';

	//проверка на ввод пустой строки
	if (strlen(buf_string) == 0)
		return (true);

	//определение массива недопустимых символов
	char invalid_symbols[] = "!@#$%^&*()_+1234567890-=\"№;:?*,./'][{}<>~` ";
	int invalid_symbols_lenght = 43;

	//посимвольное сравнение входной строки и массива недопустимых символов
	int buf_len = strlen(buf_string);
	for (int i = 0; i < buf_len; i++)
		for (int j = 0; j < invalid_symbols_lenght; j++)
			if (buf_string[i] == invalid_symbols[j])
				return(true);

	//копирование входной строки в поле объекта,
	//при успешном прохождении проверки
	strcpy(EduProg, buf_string);
	return (false);
}

//Метод установки названия группы
bool student::SetGroup(char buf_string[])
{
	//обрезка входной строки
	if (strlen(buf_string) > (FIO_fields_size / 3))
		buf_string[(FIO_fields_size / 3) - 1] = '\0';

	//проверка на ввод пустой строки
	if (strlen(buf_string) == 0)
		return (true);

	//определение массива недопустимых символов
	char invalid_symbols[] = "!@#$%^&*()_+1234567890-=\"№;:?*,./'][{}<>~` ";
	int invalid_symbols_lenght = 43;

	//посимвольное сравнение входной строки и массива недопустимых символов
	int buf_len = strlen(buf_string);
	for (int i = 0; i < buf_len; i++)
		for (int j = 0; j < invalid_symbols_lenght; j++)
			if (buf_string[i] == invalid_symbols[j])
				return(true);

	//копирование входной строки в поле объекта,
	//при успешном прохождении проверки
	strcpy(Group, buf_string);
	return (false);
}

//Метод установки названия факультета
bool student::SetFacultyName(char buf_string[])
{
	//обрезка входной строки
	if (strlen(buf_string) > FIO_fields_size)
		buf_string[FIO_fields_size - 1] = '\0';

	//проверка на ввод пустой строки
	if (strlen(buf_string) == 0)
		return (true);

	//определение массива недопустимых символов
	char invalid_symbols[] = "!@#$%^&*()_+1234567890-=\"№;:?*,./'][{}<>~` ";
	int invalid_symbols_lenght = 43;

	//посимвольное сравнение входной строки и массива недопустимых символов
	int buf_len = strlen(buf_string);
	for (int i = 0; i < buf_len; i++)
		for (int j = 0; j < invalid_symbols_lenght; j++)
			if (buf_string[i] == invalid_symbols[j])
				return(true);

	//копирование входной строки в поле объекта,
	//при успешном прохождении проверки
	strcpy(FacultyName, buf_string);
	return (false);
}

//Метод извлечения курса обучения
int student::GetCourse()
{
	int buf = course;
	return (buf);
}

//Метод извлечения учебной программы
char* student::GetEduProg()
{
	char* buf_string = (char*)calloc(FIO_fields_size / 3 * 2, sizeof(char));
	strcpy(buf_string, EduProg);
	return (buf_string);
}

//Метод извлечения названия группы
char* student::GetGroup()
{
	char* buf_string = (char*)calloc(FIO_fields_size / 3, sizeof(char));
	strcpy(buf_string, Group);
	return (buf_string);
}

//Метод извлечения названия факультета
char* student::GetFacultyName()
{
	char* buf_string = (char*)calloc(FIO_fields_size, sizeof(char));
	strcpy(buf_string, FacultyName);
	return (buf_string);
}

bool student::Init(int buf_course, char buf_EduProg[], char buf_Group[], char buf_FacultyName[], human buf_human)
{
	student new_student;
	new_student.course = buf_course;
	SetEduProg(&new_student, buf_EduProg);
	SetGroup(&new_student, buf_Group);
	SetFacultyName(&new_student, buf_FacultyName);
	new_student.thehuman = buf_human;

	return new_student;
}

bool student::Read()
{
	student new_student;
	//new_student.thehuman = ConsoleCreateHuman();

	printf("Enter course:\n");
	scanf("%d", &(new_student.course));
	printf("Enter education programm:\n");
	scanf("%s", &(new_student.EduProg));
	printf("Enter group:\n");
	scanf("%s", &(new_student.Group));
	printf("Enter faculty name:\n");
	scanf("%s", &(new_student.FacultyName));

	return(new_student);
}

void student::Display()
{
	//PrintHuman(buf_student.thehuman);
	printf("course: %d\n", buf_student.course);
	printf("direction of preparation: %s\n", buf_student.EduProg);
	printf("group: %s\n", buf_student.Group);
	printf("faculty name: %s\n", buf_student.FacultyName);
}
