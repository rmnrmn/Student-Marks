//MARKS.H
#include <iostream>
#include <iomanip>

using namespace std;

class student_marks
{
public:
	void initialise();
	void display_identities();
	void display_marks();
	void display_sum();
	void display_weighted_average();
protected:
	char student_identity[9];
	char module_identity[6];
	int exam_mark,
		practical_mark,
		sum;
	float weight_average;
};

void student_marks::initialise()
{
	const float exam_weight = 0.75,
		practical_weight = 0.25;
	char terminator;
	cout << "Enter module identity code: ";
	cin.get(module_identity, 6);
	cin.get(terminator);
	cout << "Enter student identitycode: ";
	cin.get(student_identity, 9);
	cout << "Enter examination mark: ";
	cin >> exam_mark;
	cout << "Enter practical mark: ";
	cin >> practical_mark ;
	cin.get(terminator);
	sum = exam_mark + practical_mark;
	weight_average = exam_mark * exam_weight + practical_mark * practical_weight;
}

void student_marks::display_identities() 
{
	cout << endl;
	cout << "student identity: " << student_identity
		<< " for Module: " << module_identity
		<< endl;
}

void student_marks::display_marks()
{
	cout << "Exam mark is " << exam_mark <<
		" Practical mark is " << practical_mark << endl;
}

void student_marks::display_sum()
{
	display_identities();
	display_marks();
	cout << "The sume of the mark is " << sum << endl;
}

void student_marks::display_weighted_average()
{
	display_identities();
	display_marks();
	cout << "The weighted average of the marks is "
		<< setprecision(1) << weight_average << 
		endl;

}


