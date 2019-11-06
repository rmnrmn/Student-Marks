//MARKS1.H
#include "marks.h"

class student_marks_1 :public student_marks
{
public:
	void test_same_mark();
	void test_first_class_mark();
	void test_marks();
};



void student_marks_1::test_same_mark()
{
	display_identities();
	display_marks();
	if (exam_mark == practical_mark)
		cout << "The marks are the same" << endl;
	cout << endl;
}

void student_marks_1::test_first_class_mark()
{
	display_identities();
	display_marks();
	if (exam_mark >= 70)
		cout << "First class exam mark" << endl;
	else
		cout << "Not a first class exam mark" << endl;
	cout << endl;
}

void student_marks_1::test_marks()
{
	display_identities();
	if (exam_mark == practical_mark)
	{
		cout << "The marks are the same";
		cout << " both are " << exam_mark << endl;
	}
	else if (exam_mark > practical_mark)
	{
		cout << "The exam mark is better" << endl;
		cout << "The exam mark is " << exam_mark;
		cout << " the practical mark is " <<
			practical_mark << endl;
	}
	else
	{
		cout << "The practical mark is better" <<
			endl;
		cout << "The practical mark is " <<
			practical_mark;
		cout << " the exam mark is" << exam_mark <<
			endl;

	}
	cout << endl;
}
