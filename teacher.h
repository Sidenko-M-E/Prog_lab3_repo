#include "human.h"

struct teacher {
	human thehuman; //������������ "human"
	int WorkExp;  //������� ����
	char Degree[40];	//������ �������
	char FacultyName[30];	//�������� ����������
};

//������� ��������� ������ �������
void SetDegree(teacher* edit_teacher, char new_degree[]);

//������� ��������� ����������
void SetFacultyName(teacher* edit_teacher, char new_facultyname[]);

//������� ������������� ���������
teacher CreateTeacher(human buf_human, int buf_WorkExp, char buf_Degree[], char buf_FacultyName[]);

//������� ������ ��������� � �������
void PrintTeacher(teacher buf_teacher);

//������� ����� ����� ��������� �� �������
teacher ConsoleCreateTeacher();
