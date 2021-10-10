struct faculty 
{
	char FacultyName[30];//�������� ����������
	int QuantityOfStudents;	 //���-�� �������� �� ����������
	int QuantityOfBachelors; //���-�� ����������� �� ������������
	int QuantityOfMasters;	 //���-�� ����������� � ������������

	int QuantityOfTeachers;	  //���-�� ��������������
	int QuantityOfCandidates; //���-�� ���������� ����
	int QuantityOfDoctors;    //���-�� �������� ����
	
	int QuantityOfDisciplines;//���-�� ������������� ���������
};

//������� ��������� �������� ����������
void SetFacultyName(faculty *edit_faculty, char new_facultyname[]);

//������� ��������� ���������� � ���������
void SetStudentsInfo(faculty* edit_faculty, int all_quan, int bach_quan, int mast_quan);

//������� ��������� ���������� � ��������������
void SetTeachersInfo(faculty* edit_faculty, int all_quan, int cand_quan, int doct_quan);

//������� �������� ����������� ���-�� ��������� ����� ��������
double ProcentOfMasters(faculty oper_faculty);

//������� �������� ����������� ���-�� �������� ���� ����� ��������������
double ProcentOfDoctors(faculty oper_faculty);

//������� �������� ���-�� ���������, ������������ �� ������ �������������
double ProcOfStudToTeach(faculty oper_faculty);

//������� ������������� ���������
faculty CreateFaculty(char buf_FacultyName[], int stud_quan, int bach_quan, int mast_quan, int teac_quan, int cand_quan, int doct_quan, int disc_quan);

//������� ������ ��������� � �������
void PrintFaculty(faculty buf_faculty);

//������� ����� ����� ��������� �� �������
faculty ConsoleCreateFaculty();
