//marks2b.h
//This object class student_marks_2b
#include "marks2.h"
class student_marks_2b : public student_marks_2
{
public : 
	void initialise();
	void get_identities();
	void display_grade();
	void get_practical_mark();
	void get_exam_mark();
	void do_calculations();
private:
	void display_message(const char* message);
	int get_practical_component_mark(const char* title);
	int get_exam_question_mark(int question_no,
		int& mark);
};

void student_marks_2b::initialise()
{
	get_identities();
	get_exam_mark();
	get_practical_mark();
	do_calculations();
}

void student_marks_2b::do_calculations()
{
	const float exam_weight = 0.75,
		practical_weight = 0.25;
	sum = exam_mark + practical_mark;
	weight_average = exam_mark * exam_weight + practical_mark * practical_weight;
	switch (int(weight_average + 0.5) / 10)
	{
	case 10:;
	case 9:;
	case 8:;
	case 7:grade_letter = 'A';
		break;
	case 6: grade_letter = 'B';
		break;
	case 5:grade_letter = 'C';
		break;
	case 4:grade_letter = 'D';
		break;
	default:grade_letter = 'E';
	}
}

void student_marks_2b::get_identities()
{
	char terminator;
	cout << "Enter student identity code";
	cin.get(student_identity, 9);
	cin.get(terminator);
	cout << "Enter module identity code";
	cin.get(module_identity, 6);
	cin.get(terminator);
}

void student_marks_2b ::display_grade()
{
	switch (grade_letter)
	{
	case 'A': display_message("Superb");
		break;
	case 'B': display_message("Very good");
		break;
	case 'C': display_message("Reasonable");
		break;
	default: display_message("Weak");
		
	}
}

void student_marks_2b::display_message(const char* message)
{
	cout << "Well done" << student_identity
		<< " you have obtained a grade"
		<< grade_letter << endl;
	cout << "This is a " << message << " result "
		<< endl;
}

void student_marks_2b::get_practical_mark()
{
	char terminator;
	int component_mark;
	int no_of_marks = 0;
	int total_practical_mark = 0;
	component_mark = get_practical_component_mark("first");
	while (component_mark != 999)
	{
		total_practical_mark += component_mark;
		++no_of_marks;
			component_mark=get_practical_component_mark("next");
	}
	cin.get(terminator);
	if (no_of_marks > 0)
	{
		practical_mark = total_practical_mark /
			no_of_marks;
	}
	else
		practical_mark = 0;	
}

int student_marks_2b::get_practical_component_mark
(const char* title)
{
	int mark;
	do
	{
		cout << "Enter " << title << " practical mark (or 999)";
		cin >> mark;
	} while (!(mark >= 0) && (mark <= 100) || (mark == 999));
		return mark;
}

void student_marks_2b::get_exam_mark()
{
	int question_mark;
	int valid_mark;
	exam_mark = 0;
	for (int question_number = 1; question_number <= 5; ++question_number)
	{
		do
		{
			valid_mark = get_exam_question_mark(question_number, question_mark);
		} 
		while (valid_mark == 0);
		exam_mark += question_mark;
	}
}

int student_marks_2b::get_exam_question_mark(int question_no, int& mark)
{
	char character;
	int error_indicator = 0;
	mark = 0;
	cout << "Enter examination mark no. "
		<< question_no << " ";
	cin.get(character);
	while (character != '\n')
	{
		if ((character >= '0') && (character <= '9'))
		{
			mark *= 10;
			mark += character - 48;
		}
		else
			error_indicator = 1;
		cin.get(character);
	}
	if ((mark > 20) || (error_indicator == 1))
	{
		mark = 0;
		return 0;
	}
	else
		return 1;
}