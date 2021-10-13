#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "FIO.h"

//������ �� ��������������� ������� ���������
#ifndef FIO_CPP
#define FIO_CPP

//����� ��������� �������
bool FIO::SetSurName(char new_surname[]) 
{ 
	strcpy(SurName, "gsgsdsddgdgsd");//!!!!!! �� 0 
	if (true)
		return (true);
	else
		return (false);
}

//�����  ��������� �����
bool FIO::SetName(char new_name[]) { 
	strcpy(SurName, new_name); 
	return (false);
}

//�����  ��������� ��������
bool FIO::SetPatronymic(char new_patronymic[]) { 
	strcpy(Patronymic, new_patronymic); 
	return (false);
}

//����� ���������� �������
FIO::GetSurName() { return SurName; }

//����� ���������� �����
char* FIO::GetName() { return Name; }

//����� ���������� ��������
char* FIO::GetPatronymic() { return Patronymic; };

//�����  ������������� ���������
bool FIO::Init(char buf_surname[], char buf_name[], char buf_patronymic[])
{
	//�������� �� ������ �����
	if (SetSurName(buf_surname) || SetName(buf_name) || SetPatronymic(buf_patronymic))
		return (true);
	else
		return (false);
}

//����� ����� ����� ��������� �� �������
bool FIO::Read()
{
	char buf_string[FIO_fields_size];
	printf("Enter surname:\n");
	scanf("%s", &buf_string);

	if (SetSurName(buf_string))
		return (true);
	else 
	{
		printf("Enter name:\n");
		scanf("%s", &buf_string);

		if (SetName(buf_string))
			return(true);
		else
		{
			printf("Enter patronymic:\n");
			scanf("%s", &buf_string);

			if (SetPatronymic(buf_string))
				return(true);
		}
	}
}

//����� ������ ��������� � �������
void FIO::Display()
{
	printf("FIO: %s %s %s\n", SurName, Name, Patronymic);
}

#endif FIO_CPP
