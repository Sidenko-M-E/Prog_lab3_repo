#include "human.h"

struct student {
	human thehuman; //подструктура "human"
	int course;  //курс обучения
	char EduProg[FIO_fields_size / 3 * 2];//учебная программа
	char Group[FIO_fields_size / 3];	  //название группы
	char FacultyName[FIO_fields_size];	  //название факультета
};

//Функция установки образовательной программы
void SetEduProg(student* edit_student, char new_eduprog[]);

//Функция установки группы
void SetGroup(student* edit_student, char new_group[]);   

//Функция установки факультета
void SetFacultyName(student* edit_student, char new_facultyname[]);

//Функция инициализации структуры
student CreateStudent(human buf_human, int buf_course, char buf_EduProg[], char buf_Group[], char buf_FacultyName[]);

//Функция вывода структуры в консоль
void PrintStudent(student buf_student);

//Функция ввода полей структуры из консоли
student ConsoleCreateStudent();
