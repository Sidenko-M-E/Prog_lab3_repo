struct faculty 
{
	char FacultyName[30];//название факультета
	int QuantityOfStudents;	 //кол-во студетов на факультете
	int QuantityOfBachelors; //кол-во обучающихся на бакалавриате
	int QuantityOfMasters;	 //кол-во обучающихся в магистратуре

	int QuantityOfTeachers;	  //кол-во преподавателей
	int QuantityOfCandidates; //кол-во кандидатов наук
	int QuantityOfDoctors;    //кол-во докторов наук
	
	int QuantityOfDisciplines;//кол-во преподаваемых дисциплин
};

//Функция установки названия факультета
void SetFacultyName(faculty *edit_faculty, char new_facultyname[]);

//Функция установки информации о студентах
void SetStudentsInfo(faculty* edit_faculty, int all_quan, int bach_quan, int mast_quan);

//Функция установки информации о преподавателях
void SetTeachersInfo(faculty* edit_faculty, int all_quan, int cand_quan, int doct_quan);

//Функция подсчёта процентного кол-ва магистров среди учащихся
double ProcentOfMasters(faculty oper_faculty);

//Функция подсчёта процентного кол-ва докторов наук среди преподавателей
double ProcentOfDoctors(faculty oper_faculty);

//Функция подсчёта кол-ва студентов, приходящихся на одного преподавателя
double ProcOfStudToTeach(faculty oper_faculty);

//Функция инициализации структуры
faculty CreateFaculty(char buf_FacultyName[], int stud_quan, int bach_quan, int mast_quan, int teac_quan, int cand_quan, int doct_quan, int disc_quan);

//Функция вывода структуры в консоль
void PrintFaculty(faculty buf_faculty);

//Функция ввода полей структуры из консоли
faculty ConsoleCreateFaculty();
