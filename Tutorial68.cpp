// "Member Function Templates and Function Template Overloading"
#include <iostream>
using namespace std;

template <class T>
class Samrat
{
public:
    T data;
    Samrat(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Samrat<T>::display()
{
    cout << data<<endl;
}

// Function Overloading with Templatized function
template <class T>
void func(T a) 
{
    cout <<"This is templatized Function :"<<a<<endl;
}

void func(int a)
{
    cout <<"I am First Function :"<<a<<endl;
}

int main()
{
    Samrat<char> s('S');
    s.display();

    func(4); // Exact match takes the highest priority
    func(4.0122);
    return 0;
}
