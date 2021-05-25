// MultiLevel Inheritance
#include <iostream>
using namespace std;

class Student
{
protected:
  int roll_number;

public:
  void setRollNumber(int);
  void getRollNumber(void);
};

void Student::setRollNumber(int r)
{
  roll_number = r;
}

void Student::getRollNumber()
{
  cout << "The roll Number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
  float maths;
  float physics;

public:
  void set_marks(float, float);
  void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
  maths = m1;
  physics = m2;
}
void Exam::get_marks()
{
  cout << "The marks obtained in maths are: " << maths << endl;
  cout << "The marks obtained in physics are: " << physics << endl;
}

class Result : public Exam
{
  float percentage;

public:
  void display_result()
  {
    getRollNumber();
    get_marks();
    cout << "Your Percentage is " << (maths + physics) / 2 << "%" << endl;
  }
};
int main()
{
  /*
  Notes:
      If we are inheriting B from A and C from B:[ A--->B--->C ]
      1. A is the base class for B and B is the base class for C
      2. ABC is called inheritance Path
  */
  Result samrat;
  samrat.setRollNumber(155);
  samrat.set_marks(99.9, 90);
  samrat.display_result();
  return 0;
}
