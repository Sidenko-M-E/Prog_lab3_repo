#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include "human.h"

//������ �� ��������������� ������� ���������
#ifndef HUMAN_CPP
#define HUMAN_CPP

//����� ��������� id
bool human::SetId(int buf)
{
	if (buf < 0 || buf > 9999)
		return (true);
	else
	{
		id = buf;
		return (false);
	}
}

//����� ��������� ��������
bool human::SetAge(int buf)
{
	if (buf < 0 || buf > 200)
		return (true);
	else
	{
		age = buf;
		return (false);
	}
}

//����� ��������� �����
bool human::SetHeight(int buf)
{
	if (buf < 40 || buf > 300)
		return (true);
	else
	{
		height = buf;
		return (false);
	}
}

//����� ��������� ����
bool human::SetWeight(float buf)
{
	buf = round(buf * 10) / 10;
	if (buf < 0 || buf > 650)
		return (true);
	else
	{
		weight = buf;
		return (false);
	}
}

//����� ��������� ����
bool human::SetGender(char buf)
{
	if (buf == 'M' || buf == 'F')
	{
		gender = buf;
		return (false);
	}
	else
		return (true);
}

//����� ���������� id
int human::GetId()
{
	int buf = id;
	return (buf);
}

//����� ���������� ��������
int human::GetAge()
{
	int buf = age;
	return (buf);
}

//����� ���������� �����
int human::GetHeight()
{
	int buf = height;
	return (buf);
}

//����� ���������� ����
float human::GetWeight()
{
	float buf = weight;
	return (buf);
}

//����� ���������� ����
char human::GetGender()
{
	char buf = gender;
	return (buf);
}

bool human::Init(int buf_id, int buf_age, int buf_height, float buf_weight, char buf_gender, FIO buf_FIO)
{
	return false;
}

bool human::Read()
{
	//������ ������ ������ human ��� �������� ������� ������� ������
	human check;

	//�������� ���������� ���� int 
	//��� �������� ������� ������� ������ 
	int buf_int;

	//�������� �� ������ ������� ������
	printf("Enter id:\n");
	if (scanf("%d", buf_int) != 1)
		return (true);
	else 
	{
		//������� ������ � ���� �������
		if (check.SetId(buf_int))
			return (true);
		else
		{
			//�������� �� ������ ������� ������
			printf("Enter age:\n");
			if (scanf("%d", buf_int) != 1)
				return (true);
			else
			{
				//������� ������ � ���� �������
				if (check.SetAge(buf_int))
					return (true);
				else
				{
					//�������� �� ������ ������� ������
					printf("Enter height:\n");
					if (scanf("%d", buf_int) != 1)
						return (true);
					else
					{
						//������� ������ � ���� �������
						if (check.SetHeight(buf_int))
							return (true);
						else
						{
							float buf_float;

							//�������� �� ������ ������� ������
							printf("Enter weight:\n");
							if (scanf("%f", buf_float) != 1)
								return (true);
							else
							{
								//������� ������ � ���� �������
								if (check.SetWeight(buf_float))
									return (true);
								else
								{
									char buf_char;

									//�������� �� ������ ������� ������
									printf("Enter gender:\n");
									if (scanf("%c", buf_char) != 1)
										return (true);
									else
									{
										//������� ������ � ���� �������
										if (check.SetAge(buf_char))
											return (true);
										else
										{
											//������� ������ � ������
											if (check.human_FIO.Read())
												return (true);

											//����� ��� �������� ��������,
											//����� ��������� ������ � ������� ������
											else
											{
												SetId(check.GetId());
												SetAge(check.GetAge());
												SetHeight(check.GetHeight());
												SetWeight(check.GetWeight());
												SetGender(check.GetGender());
												human_FIO = check.human_FIO;
												return(false);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

//����� ������ ����������� ������� ������ � �������
void human::Display()
{
	printf("id: %d\n", id);
	printf("age: %d\n", age);
	printf("height: %d\n", height);
	printf("weight: %0.1f\n", weight);
	printf("gender: %c\n", gender);
	human_FIO.Display();
}


//������� ������������� ���������
human CreateHuman(int buf_id, int buf_age, float buf_weight, float buf_height, char buf_gender, FIO buf_FIO)
{
	human new_human;
	new_human.id = buf_id;
	new_human.age = buf_age;
	new_human.weight = buf_weight;
	new_human.height = buf_height;
	new_human.gender = buf_gender;
	new_human.human_FIO = buf_FIO;

	return new_human;
}

#endif HUMAN_CPP
