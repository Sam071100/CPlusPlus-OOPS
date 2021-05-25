// "Templates"
#include <iostream>
using namespace std;
// Agar Template nahi hoti toh har ek datatype ke liye naya class banana padta
template <class T>
class vector
{
    int size;
    public:
    T *arr;
      vector(int size)
      {
          this->size=size;
          arr = new T[this->size];
      }
      T dotProduct(vector &v)
      {
          T d=0;
          for (int i = 0; i < this->size; i++)
          {
              d += this->arr[i] * v.arr[i];
          }
          return d;
      }
};
int main()
{
    // vector <int>v1(3), v2(3);
    // v1.arr[0]= 4;
    // v1.arr[1]= 3;
    // v1.arr[2]= 1;
    // v2.arr[0]= 1;
    // v2.arr[1]= 0;
    // v2.arr[2]= 1;

    // int a= v1.dotProduct(v2);
    // cout <<a<<endl;

    vector <float>v1(3);
    v1.arr[0]= 4.5;
    v1.arr[1]= 3.5;
    v1.arr[2]= 1;

    vector<float>v2(3);
    v2.arr[0]= 1.5;
    v2.arr[1]= 0.6;
    v2.arr[2]= 3.98;

    float a= v1.dotProduct(v2);
    cout <<a<<endl;
    return 0;
}
