#include "FIO.h"

//������ �� ��������������� ���������
#ifndef HUMAN_H
#define HUMAN_H

struct human {
	int id;		//id
	int age;	//�������
	float weight; //���
	float height; //����
	char gender;  //���
	FIO human_FIO;	  //������������ ���
};

//������� ������ ��������� � �������
void PrintHuman(human buf_human);

//������� ������������� ���������
human CreateHuman(int buf_id, int buf_age, float buf_weight, float buf_height, char buf_gender, FIO buf_FIO);

//������� ����� ����� ��������� �� �������
human ConsoleCreateHuman();

#endif HUMAN_H
