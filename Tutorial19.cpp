// This is on Function Overloading
// HERE WE WILL GET TO SEE THE OVERLOADING OF THE volume function and add function.
// It depends on the parameter that which of the function is going to be used.
#include <iostream>
using namespace std;
int add(int a, int b)
{
    cout <<"using Function with Two Arguments\n";
    return a+b;
}
int add(int a, int b, int c)
{
    cout <<"using Functions With Three Arguments\n";
    return a+b+c;
}
// Calculate the volume of the Cylinder
float volume(double r, int h)
{
    return (3.14* r* r* h);
}
// Calculate the Volume of the cube
int volume(int a)
{
    return (a*a*a);
}
// Calculate the Volume of the Cubiodal Box
int volume(int l, int b, int h)
{
  return (l*b*h);
}
int main()
{
    cout <<"The sum of 3 and 6 is "<<add(3,6)<<endl;
    cout <<"The sum of 3, 7 and 6 is "<<add(3,7,6)<<endl;
    cout <<"The volume of the cuboid of 3,7 and 6 is "<<volume(3,7,6)<<endl;
    cout <<"The volume of the cube of side 7 is "<<volume(7)<<endl;
    cout <<"The volume of the Cylinder of radius 7 and height 6 is "<<volume(7,6)<<endl;
    return 0;
}
