#include "human.h"

struct student {
	human thehuman; //������������ "human"
	int course;  //���� ��������
	char EduProg[FIO_fields_size / 3 * 2];//������� ���������
	char Group[FIO_fields_size / 3];	  //�������� ������
	char FacultyName[FIO_fields_size];	  //�������� ����������
};

//������� ��������� ��������������� ���������
void SetEduProg(student* edit_student, char new_eduprog[]);

//������� ��������� ������
void SetGroup(student* edit_student, char new_group[]);   

//������� ��������� ����������
void SetFacultyName(student* edit_student, char new_facultyname[]);

//������� ������������� ���������
student CreateStudent(human buf_human, int buf_course, char buf_EduProg[], char buf_Group[], char buf_FacultyName[]);

//������� ������ ��������� � �������
void PrintStudent(student buf_student);

//������� ����� ����� ��������� �� �������
student ConsoleCreateStudent();
