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
	int lect_hours;			//���������� ����� ������
	int pract_hours;		//���������� ����� ��������
	bool term_paper;		//������� �������� ������
	finals_type finals;		//��� ��������� �������� (����� ��� �������)
	double time_per_student;//����� � 0.35� �� ��������, ������� � 0.5� �� ��������
public:
	Discipline(): code(cd), name(nm), teacher(tch), group(gr), stud_num(std_n), lect_hours(l_hr), pract_hours(p_hr) {}
	~Discipline() {}
}