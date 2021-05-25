// "C++ Templates" ---> For Competitive Programming

/* For Objects class is a template
 * Object ke liye template class hai
 * Class ke liye template template hai
 * Templates is also called as Parameterized CLasses
Why Use Templates?
 1. FOR DRY(DO not Repeat yourself) Principle
 2. FoR Generic programming

Syntax for Templates:
  template<class T> /// T can be int, float, char, doublr, etc
  class Vector
  {
      T * arr;
      public:
        Vector(T *arr)
        {
            // COde
        }
  };

  THe above class does not represent a single class but represnts many Classes
  int main()
  {
      Vector<int> myvec(ptr);
      Vector<float> myvec1(ptr1);
  }

  */