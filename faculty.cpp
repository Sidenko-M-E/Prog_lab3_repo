#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "faculty.h"

//Функция установки названия факультета
void SetFacultyName(faculty* edit_faculty, char new_facultyname[])
{
	for (int i = 0; i < 30; i++)
		edit_faculty->FacultyName[i] = new_facultyname[i];
}

//Функция установки информации о студентах
void SetStudentsInfo(faculty* edit_faculty, int all_quan, int bach_quan, int mast_quan)
{
	edit_faculty->QuantityOfStudents = all_quan;
	edit_faculty->QuantityOfBachelors = bach_quan;
	edit_faculty->QuantityOfMasters = mast_quan;
}

//Функция установки информации о преподавателях
void SetTeachersInfo(faculty* edit_faculty, int all_quan, int cand_quan, int doct_quan)
{
	edit_faculty->QuantityOfTeachers = all_quan;
	edit_faculty->QuantityOfCandidates = cand_quan;
	edit_faculty->QuantityOfDoctors = doct_quan;
}

//Функция подсчёта процентного кол-ва магистров среди учащихся
double ProcentOfMasters(faculty oper_faculty)
{
	return(((double)oper_faculty.QuantityOfMasters) / ((double)oper_faculty.QuantityOfStudents) * 100);
}

//Функция подсчёта процентного кол-ва докторов наук среди преподавателей
double ProcentOfDoctors(faculty oper_faculty)
{
	return(((double)oper_faculty.QuantityOfDoctors) / ((double)oper_faculty.QuantityOfTeachers) * 100);
}

//Функция подсчёта кол-ва студентов, приходящихся на одного преподавателя
double ProcOfStudToTeach(faculty oper_faculty)
{
	return(((double)oper_faculty.QuantityOfStudents) / ((double)oper_faculty.QuantityOfTeachers));
}

//Функция инициализации структуры
faculty CreateFaculty(char buf_FacultyName[], int stud_quan, int bach_quan, int mast_quan, int teach_quan, int cand_quan, int doct_quan, int disc_quan)
{
	faculty new_faculty;
	SetFacultyName(&new_faculty, buf_FacultyName);
	SetStudentsInfo(&new_faculty, stud_quan, bach_quan, mast_quan);
	SetTeachersInfo(&new_faculty, teach_quan, cand_quan, doct_quan);
	new_faculty.QuantityOfDisciplines = disc_quan;

	return new_faculty;
}

//Функция вывода структуры в консоль
void PrintFaculty(faculty buf_faculty)
{
	printf("faculty name: %s\n", buf_faculty.FacultyName);
	printf("quantity of students: %d\n", buf_faculty.QuantityOfStudents);
	printf("quantity of bachelors: %d\n", buf_faculty.QuantityOfBachelors);
	printf("quantity of masters: %d\n\n", buf_faculty.QuantityOfMasters);

	printf("quantity of teachers: %d\n", buf_faculty.QuantityOfTeachers);
	printf("quantity of candidates: %d\n", buf_faculty.QuantityOfCandidates);
	printf("quantity of doctors: %d\n\n", buf_faculty.QuantityOfDoctors);

	printf("quantity of disciplines: %d\n", buf_faculty.QuantityOfDisciplines);
}

//Функция ввода полей структуры из консоли
faculty ConsoleCreateFaculty()
{
	faculty new_faculty;

	printf("Enter faculty name:\n");
	scanf("%s", &(new_faculty.FacultyName));
	printf("Enter quantity of students:\n");
	scanf("%d", &(new_faculty.QuantityOfStudents));
	printf("Enter quantity of bachelors:\n");
	scanf("%d", &(new_faculty.QuantityOfBachelors));
	printf("Enter quantity of masters:\n");
	scanf("%d", &(new_faculty.QuantityOfMasters));

	printf("Enter quantity of teachers:\n");
	scanf("%d", &(new_faculty.QuantityOfTeachers));
	printf("Enter quantity of candidates\n");
	scanf("%d", &(new_faculty.QuantityOfCandidates));
	printf("Enter quantity of doctors:\n");
	scanf("%d", &(new_faculty.QuantityOfDoctors));

	printf("Enter quantity of disciplines:\n");
	scanf("%d", &(new_faculty.QuantityOfDisciplines));

	return(new_faculty);
}
