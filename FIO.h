//������ �� �������������� ���������
#ifndef FIO_H
#define FIO_H

#define _CRT_SECURE_NO_WARNINGS
#define FIO_fields_size 30

struct FIO {
	char SurName[FIO_fields_size]; //�������
	char Name[FIO_fields_size]; //���
	char Patronymic[FIO_fields_size]; //��������
};

//������� ��������� �������
void SetSurName(FIO* edit_FIO, char new_surname[]);

//������� ��������� �����
void SetName(FIO* edit_FIO, char new_name[]);

//������� ��������� ��������
void SetPatronymic(FIO *edit_FIO , char new_patronymic[]);

//������� ������������� ���������
FIO CreateFIO(char buf_surname[], char buf_name[], char buf_patronymic[]);

//������� ������ ��������� � �������
void PrintFio(FIO buf_FIO);

//������� ����� ����� ��������� �� �������
FIO ConsoleCreateFIO();

#endif FIO_H
