#include <iostream>
using namespace std;
class Employee
{
    int Id;
   static int count; // Here the scope of the variable is only in the class and can be accessed by the other functions in this class.
   public:           // Static varaible is intitialized once and it is shared between the objects.
   void setData()
   {
       cout <<"Enter the Id\n";
       cin >>Id;
       count++;
   }
   void GetData()
   {
       cout <<"The Id of this Employee is "<<Id<<" and this is Employee No "<<count<<endl;
   }

   static void getCount() // Static function :: can only acccess the static members (static variables or static functions) and once if it is declared then it should be initialized here only.
   {
       cout <<"The value of count is "<<count<<endl;
    //    cout <<Id; Throws an error as static function can only access the static members (static variables or static functions) but here the id is not a static variable so it cannot be accessed.
   }
};

 int Employee :: count; // Here aslo count is intialized because static variable ki memory class ke saath aati hai aur har objects ke saath phir se nahi aati hai. Saare baki objects usko share karte hai apas mai
 
int main()
{
    Employee samrat, shubham, sam;
    // samrat.id=1; Cannot do this as id and count are private
    // samrat.count=1;
    samrat.setData();
    samrat.GetData();
    samrat.getCount();// Here the static function is accessed by the object of that class.

    sam.setData();
    sam.GetData();
    Employee ::getCount();// here the static functions is accessed directly without creating the objects.

    shubham.setData();
    shubham.GetData();
    Employee ::getCount(); // here the static functions is accessed directly without creating the objects.
    return 0;
}
