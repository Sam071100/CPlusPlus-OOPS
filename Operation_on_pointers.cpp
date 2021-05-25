#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p= NULL;
    int arr[]={10,20,30,40,50};
    p= arr;
    printf("%u\n",*++p+3); // ++ operation se pointer hamesha ek aage chala jata hai
    printf("%u\n",*(p-- +2 )+5);
    printf("%u\n",*(p+3)-10); // Yeh sabhi operation ke liye woh temporary solve karta hai.
    cout <<endl;
    cout <<*(p+1)<<endl;
    cout <<*(p)<<endl;
    cout <<*(p+3)<<endl;
    cout <<*(p-- +2)<<endl;
    cout <<*(p+4)<<endl;

    return 0;
}