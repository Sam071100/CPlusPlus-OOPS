// Exercise
#include <iostream>
#include <cmath>
using namespace std;

class Simple_calculator
{
    protected:
      int a, b;
    public:
      void get_number(int x, int y)
      {
          a = x;
          b = y;
      }
      int add()
      {
          return a+b;
      }
      int subtract()
      {
          return a-b;
      }
      int Multiply()
      {
          return a*b;
      }
      int Divide()
      {
          return a/b;
      }
};

class Scientific_calculator : public Simple_calculator
{
    public:
      int max_number()
      {
          return max(a,b);
      }
      int min_number()
      {
          return min(a,b);
      }
      int hypothenus()
      {
          return hypot(a,b);
      }
      int power()
      {
          return pow(a,b);
      }
};

class Hybrid_Calculator : public Scientific_calculator
{
    public:
    void Answers()
    {
        cout <<"MultiLevel inheritance is being used\n";
        cout <<"Public and Protected mode is being used\n";
    }
};
int main()
{
    Hybrid_Calculator S1;
    S1.get_number(10,5);
    cout <<S1.add()<<endl;
    cout <<S1.subtract()<<endl;
    cout <<S1.Multiply()<<endl;
    cout <<S1.Divide()<<endl;
    cout <<S1.max_number()<<endl;
    cout <<S1.min_number()<<endl;
    cout <<S1.hypothenus()<<endl;
    cout <<S1.power()<<endl;
    S1.Answers();
    return 0;
}
