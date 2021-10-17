#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "student.h"

//����� ��������� ����� ��������
bool student::SetCourse(int buf)
{
	if (buf < 0 || buf > 6)
		return (true);
	else
	{
		course = buf;
		return (false);
	}
}

//����� ��������� ������� ���������
bool student::SetEduProg(char buf_string[])
{
	//������� ������� ������
	if (strlen(buf_string) > (FIO_fields_size / 3 * 2))
		buf_string[(FIO_fields_size / 3 * 2) - 1] = '\0';

	//�������� �� ���� ������ ������
	if (strlen(buf_string) == 0)
		return (true);

	//����������� ������� ������������ ��������
	char invalid_symbols[] = "!@#$%^&*()_+1234567890-=\"�;:?*,./'][{}<>~` ";
	int invalid_symbols_lenght = 43;

	//������������ ��������� ������� ������ � ������� ������������ ��������
	int buf_len = strlen(buf_string);
	for (int i = 0; i < buf_len; i++)
		for (int j = 0; j < invalid_symbols_lenght; j++)
			if (buf_string[i] == invalid_symbols[j])
				return(true);

	//����������� ������� ������ � ���� �������,
	//��� �������� ����������� ��������
	strcpy(EduProg, buf_string);
	return (false);
}

//����� ��������� �������� ������
bool student::SetGroup(char buf_string[])
{
	//������� ������� ������
	if (strlen(buf_string) > (FIO_fields_size / 3))
		buf_string[(FIO_fields_size / 3) - 1] = '\0';

	//�������� �� ���� ������ ������
	if (strlen(buf_string) == 0)
		return (true);

	//����������� ������� ������������ ��������
	char invalid_symbols[] = "!@#$%^&*()_+1234567890-=\"�;:?*,./'][{}<>~` ";
	int invalid_symbols_lenght = 43;

	//������������ ��������� ������� ������ � ������� ������������ ��������
	int buf_len = strlen(buf_string);
	for (int i = 0; i < buf_len; i++)
		for (int j = 0; j < invalid_symbols_lenght; j++)
			if (buf_string[i] == invalid_symbols[j])
				return(true);

	//����������� ������� ������ � ���� �������,
	//��� �������� ����������� ��������
	strcpy(Group, buf_string);
	return (false);
}

//����� ��������� �������� ����������
bool student::SetFacultyName(char buf_string[])
{
	//������� ������� ������
	if (strlen(buf_string) > FIO_fields_size)
		buf_string[FIO_fields_size - 1] = '\0';

	//�������� �� ���� ������ ������
	if (strlen(buf_string) == 0)
		return (true);

	//����������� ������� ������������ ��������
	char invalid_symbols[] = "!@#$%^&*()_+1234567890-=\"�;:?*,./'][{}<>~` ";
	int invalid_symbols_lenght = 43;

	//������������ ��������� ������� ������ � ������� ������������ ��������
	int buf_len = strlen(buf_string);
	for (int i = 0; i < buf_len; i++)
		for (int j = 0; j < invalid_symbols_lenght; j++)
			if (buf_string[i] == invalid_symbols[j])
				return(true);

	//����������� ������� ������ � ���� �������,
	//��� �������� ����������� ��������
	strcpy(FacultyName, buf_string);
	return (false);
}

//����� ���������� ����� ��������
int student::GetCourse()
{
	int buf = course;
	return (buf);
}

//����� ���������� ������� ���������
char* student::GetEduProg()
{
	char* buf_string = (char*)calloc(FIO_fields_size / 3 * 2, sizeof(char));
	strcpy(buf_string, EduProg);
	return (buf_string);
}

//����� ���������� �������� ������
char* student::GetGroup()
{
	char* buf_string = (char*)calloc(FIO_fields_size / 3, sizeof(char));
	strcpy(buf_string, Group);
	return (buf_string);
}

//����� ���������� �������� ����������
char* student::GetFacultyName()
{
	char* buf_string = (char*)calloc(FIO_fields_size, sizeof(char));
	strcpy(buf_string, FacultyName);
	return (buf_string);
}

bool student::Init(int buf_course, char buf_EduProg[], char buf_Group[], char buf_FacultyName[], human buf_human)
{
	student new_student;
	new_student.course = buf_course;
	SetEduProg(&new_student, buf_EduProg);
	SetGroup(&new_student, buf_Group);
	SetFacultyName(&new_student, buf_FacultyName);
	new_student.thehuman = buf_human;

	return new_student;
}

bool student::Read()
{
	student new_student;
	//new_student.thehuman = ConsoleCreateHuman();

	printf("Enter course:\n");
	scanf("%d", &(new_student.course));
	printf("Enter education programm:\n");
	scanf("%s", &(new_student.EduProg));
	printf("Enter group:\n");
	scanf("%s", &(new_student.Group));
	printf("Enter faculty name:\n");
	scanf("%s", &(new_student.FacultyName));

	return(new_student);
}

void student::Display()
{
	//PrintHuman(buf_student.thehuman);
	printf("course: %d\n", buf_student.course);
	printf("direction of preparation: %s\n", buf_student.EduProg);
	printf("group: %s\n", buf_student.Group);
	printf("faculty name: %s\n", buf_student.FacultyName);
}
