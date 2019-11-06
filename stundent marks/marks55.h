
#include "marks2.h"

class student_marks_55 : public student_marks_2
{
public:
	void compute_average();
	void display_marks_and_average();
protected:
	float average;
};
void student_marks_55::compute_average()
{
	average = sum / 2.0;
}
void student_marks_55::display_marks_and_average()
{
	display_identities();
	display_marks();
	cout << "The weighted average of the marks is "
		<< setprecision(3) << weight_average << endl;
}