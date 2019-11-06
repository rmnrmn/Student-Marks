//marks2a.h
//The object class student_marks_2a
#include "marks2.h" 
class student_marks_2a :public student_marks_2
{
public:
	void get_identities();
	void get_practical_mark();
	void get_exam_mark();
	void do_calculations();
	void initialise();
};

void student_marks_2a::get_identities()
{
	char terminator;
	cout << "Enter student identity code";
	cin.get(student_identity, 9);
	cin.get(terminator);
	cout << "Enter module identity code";
	cin.get(module_identity, 6);
	cin.get(terminator);
}

void student_marks_2a::get_exam_mark()
{
	char terminator;
	int question_mark;
	exam_mark = 0;
	for (int question_number = 1; question_number <= 5; ++question_number)
	{
		cout << "Enter examination mark no. " <<
			question_number << " ";
		cin >> question_mark;
		exam_mark += question_mark;
	}
	cin.get(terminator);
}

void student_marks_2a::get_practical_mark()
{
	char terminator;
	int component_mark;
	int no_of_marks = 0;
	int total_practical_mark = 0;
	cout << "Enter first practical mark(or 999)";
	cin >> component_mark;
	while (component_mark != 999)
	{
		total_practical_mark += component_mark;
		++no_of_marks;
		cout << "Enter next practical mark (or 999)";
		cin >> component_mark;
	}
	cin.get(terminator);
	if (no_of_marks > 0)
		practical_mark = total_practical_mark /
		no_of_marks;
	else
		practical_mark = 0;
}







