#pragma once

enum finals_type {exam, pass};


class Discipline
{
private:
	int code;				//��� ����������
	std::string name;		//������������ ����������
	std::string teacher;	//������� �������������
	int group;				//��� ������
	int stud_num;			//���������� ��������� � ������
	double lect_hours;		//���������� ����� ������
	double pract_hours;		//���������� ����� ��������
	bool term_paper;		//������� �������� ������
	finals_type finals;		//��� ��������� �������� (����� ��� �������)
	double time_per_student;//����� � 0.35� �� ��������, ������� � 0.5� �� ��������
public:
	Discipline();
	Discipline(int a_code, std::string a_name, std::string a_teacher, int a_group, int a_stud_num, 
		double a_lect_hours, double a_pract_hours, bool a_term_paper, finals_type a_finals): 
		code(a_code), name(a_name), teacher(a_teacher), group(a_group), stud_num(a_stud_num), 
		lect_hours(a_lect_hours), pract_hours(a_pract_hours), term_paper(a_term_paper), finals(a_finals);
	~Discipline();
}