// Virtual Base Class. Example of Hybrid Inheritance
#include <iostream>
using namespace std;

class Student// Student is virtual Base class
{
    protected:
      int roll_no;
    public:
      void set_number(int a)
      {
          roll_no = a;
      }
      void print_number()
      {
          cout <<"Your roll no is: "<<roll_no<<endl;
      }
};

class Test : virtual public Student // public virtual bhi likh sakte hai
{
    protected:
      float maths, physics;
    public:
      void set_marks(float m1, float m2)
      {
          maths = m1;
          physics = m2;
      }
      void print_marks()
      {
          cout <<"You result is here: "<<endl
               <<"Maths: "<<maths<<endl
               <<"Physics: "<<physics<<endl;
      }
};

class Sports : virtual public Student
{
    protected:
      float score;
    public:
      void set_score(float sc)
      {
          score = sc;
      }
      void print_score()
      {
          cout <<"Your PT score is "<<score<<endl;
      }
};

class Result : public Test, public Sports
{
    private:
      float total;
    public:
      void display()
      {
          total = (maths + physics + score)/3;
          print_number();
          print_marks();
          print_score();
          cout <<"Your Percentage is: "<<total<<endl;
      }
};
int main()
{
  // Agar virtual nahi lagate Sports aur Test Class inherit karte waqt toh Result class ke pass do roll_no ka variable aa jata jo ki ambigous hota aur compiler error throw karta
    Result r1;
    r1.set_number(155);
    r1.set_marks(91, 98.9);
    r1.set_score(98);
    r1.display();
    return 0;
}
