#include "human.h"

struct teacher {
	human thehuman; //подструктура "human"
	int WorkExp;  //рабочий стаж
	char Degree[40];	//ученая степень
	char FacultyName[30];	//название факультета
};

//Функция установки ученой степени
void SetDegree(teacher* edit_teacher, char new_degree[]);

//Функция установки факультета
void SetFacultyName(teacher* edit_teacher, char new_facultyname[]);

//Функция инициализации структуры
teacher CreateTeacher(human buf_human, int buf_WorkExp, char buf_Degree[], char buf_FacultyName[]);

//Функция вывода структуры в консоль
void PrintTeacher(teacher buf_teacher);

//Функция ввода полей структуры из консоли
teacher ConsoleCreateTeacher();
