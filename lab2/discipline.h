#pragma once

enum finals_type {exam, pass};


class Discipline
{
private:
	int code;				//код дисциплины
	std::string name;		//наименование дисциплины
	std::string teacher;	//фамили€ преподавател€
	int group;				//код группы
	int stud_num;			//количество студентов в группе
	double lect_hours;		//количество часов лекций
	double pract_hours;		//количество часов практики
	bool term_paper;		//наличие курсовой работы
	finals_type finals;		//вид итогового контрол€ (зачет или экзамен)
	double time_per_student;//зачет Ч 0.35ч на студента, экзамен Ч 0.5ч на студента
public:
	Discipline();
	Discipline(int a_code, std::string a_name, std::string a_teacher, int a_group, int a_stud_num, 
		double a_lect_hours, double a_pract_hours, bool a_term_paper, finals_type a_finals): 
		code(a_code), name(a_name), teacher(a_teacher), group(a_group), stud_num(a_stud_num), 
		lect_hours(a_lect_hours), pract_hours(a_pract_hours), term_paper(a_term_paper), finals(a_finals);
	~Discipline();
}