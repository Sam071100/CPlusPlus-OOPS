// Here we are writing a function to swap the private data of c1 and c2 class.
#include <iostream>
using namespace std;
class c2;// Here it was forward declared as it was used in the Class c1
class c1
{
    int val;
    friend void exchange(c1 &X, c2 &Y);// By reference
    public:
    void indata(int a)
    {
        val=a;
    }
    void display()
    {
        cout <<val<<endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &X, c2 &Y);
    public:
    void indata(int a)
    {
        val2=a;
    }
    void display()
    {
        cout <<val2<<endl;
    }
};

void exchange(c1 &X, c2 &Y)// Using the method of call by refernce variable for swapping.or we can have used the method of pointers.
{
    int temp=X.val;
    X.val=Y.val2;
    Y.val2=temp;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1,oc2);

    cout <<"The value of c1 after exchanging becomes:";
    oc1.display();
    cout <<"The value of c1 after exchanging becomes:";
    oc2.display();

    return 0;
}
