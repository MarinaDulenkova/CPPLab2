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
	int lect_hours;			//количество часов лекций
	int pract_hours;		//количество часов практики
	bool term_paper;		//наличие курсовой работы
	finals_type finals;		//вид итогового контрол€ (зачет или экзамен)
	double time_per_student;//зачет Ч 0.35ч на студента, экзамен Ч 0.5ч на студента
public:
	Discipline(): code(cd), name(nm), teacher(tch), group(gr), stud_num(std_n), lect_hours(l_hr), pract_hours(p_hr) {}
	~Discipline() {}
}