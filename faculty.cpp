#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "faculty.h"

//Метод установки названия факультета
bool faculty::SetFacultyName(char buf_string[])
{
	//обрезка входной строки
	if (strlen(buf_string) > 30)
		buf_string[30 - 1] = '\0';

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


bool faculty::SetQuantityOfStudents(int buf)
{
	if (buf < 0 || buf > 1000)
		return (true);
	else
	{
		QuantityOfStudents = buf;
		return (false);
	}
}


bool faculty::SetQuantityOfBachelors(int buf)
{
	if (buf < 0 || buf > 1000)
		return (true);
	else
	{
		QuantityOfBachelors = buf;
		return (false);
	}
}


bool faculty::SetQuantityOfMasters(int buf)
{
	if (buf < 0 || buf > 1000)
		return (true);
	else
	{
		QuantityOfMasters = buf;
		return (false);
	}
}


bool faculty::SetQuantityOfTeachers(int buf)
{
	if (buf < 0 || buf > 100)
		return (true);
	else
	{
		QuantityOfTeachers = buf;
		return (false);
	}
}


bool faculty::SetQuantityOfCandidates(int buf)
{
	if (buf < 0 || buf > 100)
		return (true);
	else
	{
		QuantityOfCandidates = buf;
		return (false);
	}
}


bool faculty::SetQuantityOfDoctors(int buf)
{
	if (buf < 0 || buf > 100)
		return (true);
	else
	{
		QuantityOfDoctors = buf;
		return (false);
	}
}


bool faculty::SetQuantityOfDisciplines(int buf)
{
	if (buf < 0 || buf > 100)
		return (true);
	else
	{
		QuantityOfDisciplines = buf;
		return (false);
	}
}


bool faculty::SetStudentsInfo(int all_quan, int bach_quan, int mast_quan)
{
	
}


bool faculty::SetTeachersInfo(int all_quan, int cand_quan, int doct_quan)
{
	
}


char* faculty::GetFacultyName()
{
	char* buf_string = (char*)calloc(30, sizeof(char));
	strcpy(buf_string, FacultyName);
	return (buf_string);
}


int faculty::GetQuantityOfStudents()
{
	int buf = QuantityOfStudents;
	return (buf);
}


int faculty::GetQuantityOfBachelors()
{
	int buf = QuantityOfBachelors;
	return (buf);
}


int faculty::GetQuantityOfMasters()
{
	int buf = QuantityOfMasters;
	return (buf);
}


int faculty::GetQuantityOfTeachers()
{
	int buf = QuantityOfTeachers;
	return (buf);
}


int faculty::GetQuantityOfCandidates()
{
	int buf = QuantityOfCandidates;
	return (buf);
}


int faculty::GetQuantityOfDoctors()
{
	int buf = QuantityOfDoctors;
	return (buf);
}


int faculty::GetQuantityOfDisciplines()
{
	int buf = QuantityOfDisciplines;
	return (buf);
}


double faculty::ProcentOfMasters()
{
	return(((double)QuantityOfMasters) / ((double)QuantityOfStudents) * 100);
}


double faculty::ProcentOfDoctors()
{
	return(((double)QuantityOfDoctors) / ((double)QuantityOfTeachers) * 100);
}


double faculty::ProcOfStudToTeach()
{
	return(((double)QuantityOfStudents) / ((double)QuantityOfTeachers));
}


bool faculty::Init(char buf_FacultyName[], int stud_quan, int bach_quan, int mast_quan, int teac_quan, int cand_quan, int doct_quan, int disc_quan)
{
	faculty new_faculty;
	SetFacultyName(&new_faculty, buf_FacultyName);
	SetStudentsInfo(&new_faculty, stud_quan, bach_quan, mast_quan);
	SetTeachersInfo(&new_faculty, teach_quan, cand_quan, doct_quan);
	new_faculty.QuantityOfDisciplines = disc_quan;

	return new_faculty;
}

bool faculty::Read()
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

//Метод вывода содержимого объекта класса в консоль
void faculty::Display()
{
	printf("faculty name: %s\n", FacultyName);
	printf("quantity of students: %d\n", QuantityOfStudents);
	printf("quantity of bachelors: %d\n", QuantityOfBachelors);
	printf("quantity of masters: %d\n\n", QuantityOfMasters);

	printf("quantity of teachers: %d\n", QuantityOfTeachers);
	printf("quantity of candidates: %d\n", QuantityOfCandidates);
	printf("quantity of doctors: %d\n\n", QuantityOfDoctors);

	printf("quantity of disciplines: %d\n", QuantityOfDisciplines);
}
