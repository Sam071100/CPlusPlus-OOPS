// Array of objects using the pointers
#include <iostream>
using namespace std;

class Shopitem
{
    int id;
    float price;
    public:
      void setData(int a, float b)
      {
          id = a;
          price = b;
      }
      void getData()
      {
          cout <<"The code of the item is "<<id<<endl;
          cout <<"The Price of the item is "<<price<<endl;
      }
};
int main()
{
    int size = 3,p;
    float q;
    // general item, veggies item, hardware item
    Shopitem *ptr, *ptrTemp;
    ptr = new Shopitem[size];// array of objects
    ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout <<"Enter Id and price of item "<<i+1<<endl;
        cin >>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    // outputing the information of the object
    ptr =ptrTemp;
    for (int i = 0; i < size; i++)
    {
        cout <<"Item number: "<<i+1<<endl;
        ptr->getData();
        ptr++;
    }
    
    return 0;
}
