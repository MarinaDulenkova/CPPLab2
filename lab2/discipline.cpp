#include "stdafx.h"
#include "discipline.h"

Discipline::Discipline()
{
	code = 0;			
	name = "";	
	teacher = "";
	group = 0;		
	stud_num = 0;			
	lect_hours = 0;			
	pract_hours = 0;	
	term_paper = false;	
	finals = pass;		
	time_per_student = 0.35;
}

Discipline::Discipline(int a_code, std::string a_name, std::string a_teacher, int a_group, int a_stud_num, 
		double a_lect_hours, double a_pract_hours, bool a_term_paper, finals_type a_finals): 
		code(a_code), name(a_name), teacher(a_teacher), group(a_group), stud_num(a_stud_num), 
		lect_hours(a_lect_hours), pract_hours(a_pract_hours), term_paper(a_term_paper), finals(a_finals) 
{
	switch (finals)
	{
	case exam:
		{
			time_per_student = 0.5;
			break;
		}
	case pass:
		{
			time_per_student = 0.35;
			break;
		}
	}
}