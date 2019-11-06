//marks2.h
//The object class student_marks_2
#include "marks.h"
class student_marks_2: public student_marks
{
public:
	void initialise();
	void test_zeros();
	void display_grade();
protected:
	char grade_letter;
};

void student_marks_2 :: initialise()
{
	student_marks::initialise();
	switch (int(weight_average + 0.5) / 10)
	{
	case 10:;
	case 9:;
	case 8:;
	case 7:grade_letter = 'A';
		break;
	case 6:grade_letter = 'B';
		break;
	case 5:grade_letter = 'C';
		break;
	case 4:grade_letter = 'D';
		break;
	default:grade_letter = 'E';
	}
}

void student_marks_2::test_zeros()
{
	if ((exam_mark == 0) && (practical_mark == 0))
	{
		display_identities();
		cout << "Both marks are zero" << endl;
		cout << endl;
	}
	if ((exam_mark == 0) || (practical_mark == 0))
	{
		display_identities();
		cout << "At least one mark is zero" << endl;
		if (exam_mark != 0)
			cout << "The exam mark is not zero" << endl;
		if (!(practical_mark == 0))
			cout << "The practical mark is not zero" << endl;
		cout << endl;
	}
}

void student_marks_2::display_grade()
{
	display_identities();
	cout << "The grade is " << grade_letter << " ";
	switch (grade_letter)
	{
	case 'A': cout << "Excellent";
		break;
	case 'B': cout << "Very good";
		break;
	case 'C': cout << "Pass, but you ";
	default:cout << "must try harder";
	}
	cout << endl;
}
