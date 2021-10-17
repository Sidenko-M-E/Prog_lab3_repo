#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "teacher.h"

//Функция установки ученой степени
void SetDegree(teacher* edit_teacher, char new_degree[])
{
	for (int i = 0; i < 40; i++)
		edit_teacher->Degree[i] = new_degree[i];
}

//Функция установки факультета
void SetFacultyName(teacher* edit_teacher, char new_facultyname[])
{
	for (int i = 0; i < 30; i++)
		edit_teacher->FacultyName[i] = new_facultyname[i];
}

//Функция инициализации структуры
teacher CreateTeacher(human buf_human, int buf_WorkExp, char buf_Degree[], char buf_FacultyName[])
{
	teacher new_teacher;
	new_teacher.WorkExp = buf_WorkExp;
	SetDegree(&new_teacher, buf_Degree);
	SetFacultyName(&new_teacher, buf_FacultyName);
	new_teacher.thehuman = buf_human;

	return new_teacher;
}

//Функция вывода структуры в консоль
void PrintTeacher(teacher buf_teacher)
{
	//PrintHuman(buf_teacher.thehuman);
	printf("working experience: %d years\n", buf_teacher.WorkExp);
	printf("scientific degree: %s\n", buf_teacher.Degree);
	printf("faculty name: %s\n", buf_teacher.FacultyName);
}

//Функция ввода полей структуры из консоли
teacher ConsoleCreateTeacher()
{
	teacher new_teacher;
	//new_teacher.thehuman = ConsoleCreateHuman();

	printf("Enter working experience:\n");
	scanf("%d", &(new_teacher.WorkExp));
	printf("Enter scientific degree:\n");
	scanf("%s", &(new_teacher.Degree));
	printf("Enter faculty name:\n");
	scanf("%s", &(new_teacher.FacultyName));

	return(new_teacher);
}
