#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "student.h"
#include "teacher.h"
#include "faculty.h"
#include "FIO.h"
#include "human.h"


int main()
{
	///FIO struct
	printf("--------FIO class--------\n");
	char Familia[30] = "Sidenko";
	char Imya[30] = "Matvey";
	char Otchestvo[30] = "Evgenievich";

	//Создание нового объекта из готовых данных
	printf("------Init method-------\n");
	FIO my_FIO;
	
	if(my_FIO.Init(Familia, Imya, Otchestvo))
		printf("error\n");
	else
		my_FIO.Display();

	//Ввод полей объекта из консоли
	printf("\n---Read method---\n");
	if (!my_FIO.Read())
		my_FIO.Display();
	else
		printf("error\n");

	//Ввод полей объекта с помощью методов
	printf("\n------Set methods-------\n");
	if ((my_FIO.SetSurName(strcpy(Familia, " Ivanov ")))||(my_FIO.SetName(strcpy(Imya, " Ivan ")))||(my_FIO.SetPatronymic(strcpy(Otchestvo, " Ivanovich "))))
		printf("error\n");
	else
		my_FIO.Display();



	///human struct
	printf("\n--------human class--------\n");

	//Создание нового объекта из готовых данных
	printf("-------Init method-------\n");
	human me;

	if(me.Init(1913, 19, 70, 182, 'M', my_FIO))
		printf("error\n");
	else
		me.Display();
	
	//Ввод полей объекта из консоли
	printf("\n------Read method------\n");
	if (me.Read())
		printf("error\n");
	else
		me.Display();

	//Ввод полей объекта с помощью методов
	printf("\n------Set methods-------\n");
	if (me.SetId(1999) || me.SetAge(27) || me.SetHeight(180) ||
		me.SetWeight(80.890) || me.SetGender('M'))
		printf("error\n");
	else
		me.Display();



	///student struct
	printf("\n--------student class--------\n");
	char EduProg[] = "Bachelor";
	char Group[] = "PI-03";
	char FacultyName[] = "FoIT";

	//Создание нового объекта из готовых данных
	printf("-------Init method-------\n");
	student my_student;
	if (my_student.Init(3, EduProg, Group, FacultyName, me))
		printf("error\n");
	else 
		my_student.Display();

	//Ввод полей объекта из консоли
	printf("\n------Read method------\n");
	if (my_student.Read())
		printf("error\n");
	else
		my_student.Display();

	//Ввод полей объекта с помощью методов
	printf("\n------Set methods-------\n");
	if (my_student.SetCourse(4) || my_student.SetEduProg(strcpy(EduProg, "Master")) || 
		my_student.SetGroup(strcpy(Group, "CS-91")) ||
		my_student.SetFacultyName(strcpy(FacultyName, "FoIT")))
		printf("error\n");
	else
		my_student.Display();



	///teacher struct
	printf("\n--------teacher class--------\n");
	char Degree[40] = "Candidate_of_Mathematical_Sciences";

	//Создание нового объекта из готовых данных
	printf("-------Init method-------\n");
	teacher my_teacher;
	if (my_teacher.Init(40, Degree, FacultyName, me))
		printf("error\n");
	else
		my_teacher.Display();

	//Ввод полей объекта из консоли
	printf("\n------Read method------\n");
	if (my_teacher.Read())
		printf("error\n");
	else
		my_teacher.Display();

	//Ввод полей объекта с помощью методов
	printf("\n------Set methods-------\n");
	if (my_teacher.SetWorkExp(30) || my_teacher.SetDegree(strcpy(Degree, "Doctor_of_Mathematical_Sciences")) || my_teacher.SetFacultyName(FacultyName))
		printf("error\n");
	else
		my_teacher.Display();



	///faculty struct
	printf("\n------faculty class----------\n");

	//Создание нового объекта из готовых данных
	printf("-------Init method-------\n");
	faculty my_faculty;
	if (my_faculty.Init(FacultyName, 180, 145, 35, 40, 20, 5, 70))
		printf("error\n");
	else
		my_faculty.Display();

	//Ввод полей объекта из консоли
	printf("\n------Read method------\n");
	if (my_faculty.Read())
		printf("error\n");
	else
		my_faculty.Display();

	//Ввод полей структуры с помощью функций
	printf("\n--------function enter--------\n");
	my_faculty.SetStudentsInfo(300, 270, 30);
	my_faculty.SetTeachersInfo(40, 33, 7);
	my_faculty.Display();

	//Функции обработки содержимого структуры
	printf("\n----processing by functions----\n");
	printf("Procent of masters on faculty: %0.2lf\n", my_faculty.ProcentOfMasters());
	printf("Procent of doctors on faculty: %0.2lf\n", my_faculty.ProcentOfDoctors());
	printf("Students to teachers quantity: %0.2lf\n", my_faculty.ProcOfStudToTeach());


	//Конец демонстрационного варианта
	printf("\nPress any key to exit.\n");
	_getch();
}
