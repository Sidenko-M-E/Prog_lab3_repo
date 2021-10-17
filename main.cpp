#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "student.h"
//#include "teacher.h"
//#include "faculty.h"
#include "FIO.h"
#include "human.h"


int main()
{
	///FIO struct
	printf("--------FIO class--------\n");
	char Familia[30] = "Sidenko";
	char Imya[30] = "Matvey";
	char Otchestvo[30] = "Evgenievich";

	//—оздание нового объекта из готовых данных
	printf("------Init method-------\n");
	FIO my_FIO;
	
	if(my_FIO.Init(Familia, Imya, Otchestvo))
		printf("error\n");
	else
		my_FIO.Display();

	//¬вод полей объекта из консоли
	printf("\n---Read method---\n");
	if (!my_FIO.Read())
		my_FIO.Display();
	else
		printf("error\n");

	//¬вод полей объекта с помощью методов
	printf("\n------Set methods-------\n");
	if ((my_FIO.SetSurName(strcpy(Familia, " Ivanov ")))||(my_FIO.SetName(strcpy(Imya, " Ivan ")))||(my_FIO.SetPatronymic(strcpy(Otchestvo, " Ivanovich "))))
		printf("error\n");
	else
		my_FIO.Display();


	///human struct
	printf("\n--------human struct--------\n");

	//—оздание нового объекта из готовых данных
	printf("-------Init method-------\n");
	human me;

	if(me.Init(1913, 19, 70, 182, 'M', my_FIO))
		printf("error\n");
	else
		me.Display();
	
	//¬вод полей объекта из консоли
	printf("\n------Read method------\n");
	if (me.Read())
		printf("error\n");
	else
		me.Display();

	//¬вод полей объекта с помощью методов
	printf("\n------Set methods-------\n");
	if (me.SetId(1999) || me.SetAge(27) || me.SetHeight(180) ||
		me.SetWeight(80.890) || me.SetGender('M'))
		printf("error\n");
	else
		me.Display();

	/*
	///student struct
	printf("\n--------student struct--------\n");
	char EduProg[] = "Bachelor";
	char Group[] = "PI-03";
	char FacultyName[] = "FoIT";

	//—оздание новой структуры из готовых данных
	printf("---initialization function---\n");
	student my_student = CreateStudent(me, 3, EduProg, Group, FacultyName);
	PrintStudent(my_student);

	//—оздание новой структуры из консоли
	printf("\n---console enter function---\n");
	my_student = ConsoleCreateStudent();
	printf("\n");
	PrintStudent(my_student);

	//¬вод полей структуры с помощью функций
	printf("\n--------function enter--------\n");
	SetEduProg(&my_student, EduProg);
	SetGroup(&my_student, Group);
	SetFacultyName(&my_student, FacultyName);
	PrintStudent(my_student);



	///teacher struct
	printf("\n--------teacher struct--------\n");
	char Degree[] = "Candidate_of_Mathematical_Sciences";

	//—оздание новой структуры из готовых данных
	printf("---initialization function---\n");
	teacher my_teacher = CreateTeacher(me, 40, Degree, FacultyName);
	PrintTeacher(my_teacher);

	//—оздание новой структуры из консоли
	printf("\n---console enter function---\n");
	my_teacher = ConsoleCreateTeacher();
	printf("\n");
	PrintTeacher(my_teacher);

	//¬вод полей структуры с помощью функций
	printf("\n--------function enter--------\n");
	SetDegree(&my_teacher, Degree);
	SetFacultyName(&my_teacher, FacultyName);
	PrintTeacher(my_teacher);



	///faculty struct
	printf("\n------faculty struct----------\n");

	//—оздание новой структуры из готовых данных
	printf("---initialization function---\n");
	faculty my_faculty = CreateFaculty(FacultyName, 180, 145, 35, 40, 20, 5, 70);
	PrintFaculty(my_faculty);

	//—оздание новой структуры из консоли
	printf("\n---console enter function---\n");
	my_faculty = ConsoleCreateFaculty();
	printf("\n");
	PrintFaculty(my_faculty);

	//¬вод полей структуры с помощью функций
	printf("\n--------function enter--------\n");
	SetStudentsInfo(&my_faculty, 300, 270, 30);
	SetTeachersInfo(&my_faculty, 40, 33, 7);
	PrintFaculty(my_faculty);

	//‘ункции обработки содержимого структуры
	printf("\n----processing by functions----\n");
	printf("Procent of masters on faculty: %0.2lf\n", ProcentOfMasters(my_faculty));
	printf("Procent of doctors on faculty: %0.2lf\n", ProcentOfDoctors(my_faculty));
	printf("Students to teachers quantity: %0.2lf\n", ProcOfStudToTeach(my_faculty));

	*/
	printf("\nPress any key to exit.\n");
	_getch();
}
