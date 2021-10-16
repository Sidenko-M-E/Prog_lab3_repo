#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
//#include "student.h"
//#include "teacher.h"
//#include "faculty.h"
#include "FIO.h"


int main()
{
	///FIO struct
	printf("--------FIO struct--------\n");
	char Familia[30] = "Sidenko";
	char Imya[30] = "Matvey";
	char Otchestvo[30] = "Evgenievich";

	//Создание нового объекта из готовых данных
	printf("---initialization function---\n");
	FIO my_FIO;
	
	if(!my_FIO.Init(Familia, Imya, Otchestvo))
		my_FIO.Display();

	//Ввод полей объекта из консоли
	printf("\n---console enter function---\n");
	if (!my_FIO.Read())
		my_FIO.Display();
	else
		printf("reading error\n");

	//Ввод полей объекта с помощью методов
	printf("\n--------function enter--------\n");
	my_FIO.SetSurName(strcpy(Familia, " Ivanov "));
	my_FIO.SetName(strcpy(Imya, " Ivan "));
	my_FIO.SetPatronymic(strcpy(Otchestvo, " Ivanovich "));
	my_FIO.Display();


	/*
	///human struct
	printf("\n--------human struct--------\n");
	//Создание новой структуры из готовых данных
	printf("---initialization function---\n");
	human me = CreateHuman(1913, 19, 70, 182, 'M', my_FIO);
	PrintHuman(me);

	//Создание новой структуры из консоли
	printf("\n---console enter function---\n");
	me = ConsoleCreateHuman();
	printf("\n");
	PrintHuman(me);



	///student struct
	printf("\n--------student struct--------\n");
	char EduProg[] = "Bachelor";
	char Group[] = "PI-03";
	char FacultyName[] = "FoIT";

	//Создание новой структуры из готовых данных
	printf("---initialization function---\n");
	student my_student = CreateStudent(me, 3, EduProg, Group, FacultyName);
	PrintStudent(my_student);

	//Создание новой структуры из консоли
	printf("\n---console enter function---\n");
	my_student = ConsoleCreateStudent();
	printf("\n");
	PrintStudent(my_student);

	//Ввод полей структуры с помощью функций
	printf("\n--------function enter--------\n");
	SetEduProg(&my_student, EduProg);
	SetGroup(&my_student, Group);
	SetFacultyName(&my_student, FacultyName);
	PrintStudent(my_student);



	///teacher struct
	printf("\n--------teacher struct--------\n");
	char Degree[] = "Candidate_of_Mathematical_Sciences";

	//Создание новой структуры из готовых данных
	printf("---initialization function---\n");
	teacher my_teacher = CreateTeacher(me, 40, Degree, FacultyName);
	PrintTeacher(my_teacher);

	//Создание новой структуры из консоли
	printf("\n---console enter function---\n");
	my_teacher = ConsoleCreateTeacher();
	printf("\n");
	PrintTeacher(my_teacher);

	//Ввод полей структуры с помощью функций
	printf("\n--------function enter--------\n");
	SetDegree(&my_teacher, Degree);
	SetFacultyName(&my_teacher, FacultyName);
	PrintTeacher(my_teacher);



	///faculty struct
	printf("\n------faculty struct----------\n");

	//Создание новой структуры из готовых данных
	printf("---initialization function---\n");
	faculty my_faculty = CreateFaculty(FacultyName, 180, 145, 35, 40, 20, 5, 70);
	PrintFaculty(my_faculty);

	//Создание новой структуры из консоли
	printf("\n---console enter function---\n");
	my_faculty = ConsoleCreateFaculty();
	printf("\n");
	PrintFaculty(my_faculty);

	//Ввод полей структуры с помощью функций
	printf("\n--------function enter--------\n");
	SetStudentsInfo(&my_faculty, 300, 270, 30);
	SetTeachersInfo(&my_faculty, 40, 33, 7);
	PrintFaculty(my_faculty);

	//Функции обработки содержимого структуры
	printf("\n----processing by functions----\n");
	printf("Procent of masters on faculty: %0.2lf\n", ProcentOfMasters(my_faculty));
	printf("Procent of doctors on faculty: %0.2lf\n", ProcentOfDoctors(my_faculty));
	printf("Students to teachers quantity: %0.2lf\n", ProcOfStudToTeach(my_faculty));

	*/
	printf("\nPress any key to exit.\n");
	_getch();
}
