#include <bits./stdc++.h>
using namespace std;
int main()
{
    static int a[]={0,1,2,3,4};
    int *p[]={a, a+1,a+2,a+3,a+4};// Elements of this array are pointing to the address of the elements of the array a.
    for (int i = 0; i < 5; i++)
    {
        printf("%p, %p, %d\n",p+i,*(p+i),*(*(p+i)));
    }
    cout <<a;
    return 0;
}
