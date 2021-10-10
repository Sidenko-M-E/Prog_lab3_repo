#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"

//Функция установки образовательной программы
void SetEduProg(student* edit_student, char new_eduprog[])
{
	for (int i = 0; i < (FIO_fields_size / 3 * 2); i++)
		edit_student->EduProg[i] = new_eduprog[i];
}

//Функция установки группы
void SetGroup(student* edit_student, char new_group[])
{
	for (int i = 0; i < FIO_fields_size / 3; i++)
		edit_student->Group[i] = new_group[i];
}

//Функция установки факультета
void SetFacultyName(student* edit_student, char new_facultyname[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		edit_student->FacultyName[i] = new_facultyname[i];
}

//Функция инициализации структуры
student CreateStudent(human buf_human, int buf_course, char buf_EduProg[], char buf_Group[], char buf_FacultyName[])
{
	student new_student;
	new_student.course = buf_course;
	SetEduProg(&new_student, buf_EduProg);
	SetGroup(&new_student, buf_Group);
	SetFacultyName(&new_student, buf_FacultyName);
	new_student.thehuman = buf_human;

	return new_student;
}

//Функция вывода структуры в консоль
void PrintStudent(student buf_student)
{
	PrintHuman(buf_student.thehuman);
	printf("course: %d\n", buf_student.course);
	printf("direction of preparation: %s\n", buf_student.EduProg);
	printf("group: %s\n", buf_student.Group);
	printf("faculty name: %s\n", buf_student.FacultyName);
}

//Функция ввода полей структуры из консоли
student ConsoleCreateStudent()
{
	student new_student;
	new_student.thehuman = ConsoleCreateHuman();

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
