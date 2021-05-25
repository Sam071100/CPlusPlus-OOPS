#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Intializing by pushing values one by one:
    vector<int> vect;
    vect.push_back(0);
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);

    for ( const auto &value : vect)
    {
        cout <<value<<" ";
    }
    cout <<endl;
    for (int x : vect)
    {
        cout <<x<<" ";
    }
    cout <<endl;
    // 2. Specifying size and intializing all values:
          // CPP program to create an empty vector and push values one by one.
    int n = 3;
    vector<int> vet(n,10);

    for (const auto &value : vet)
    {
        cout <<value<<" ";
    }
    cout <<endl;

    for (int x : vet)
    {
        cout <<x<<" ";
    }
    cout <<endl;

    // 3. Intializing like arrays:
       //CPP program to initialize a vector like an array.
    
    vector<int> vec{1,2,3,4,5};

    for (const auto &value : vec)
    {
        cout <<value<<" ";
    }
    cout <<endl;
    for (int x: vec)
    {
        cout <<x<<" ";
    }
    cout <<endl;

    // 4. Initializing from an array :
        //CPP program to initialize a vector from an array.
    
    int arr[] = {10,20,30,40};
    n = sizeof(arr)/sizeof(arr[0]);

    vector<int> ve(arr, arr+n);
    for ( const auto &value : ve)
    {
        cout <<value<<" ";
    }
    cout <<endl;
    for (int x: ve)
    {
        cout <<x<<" ";
    }
    cout <<endl;

    // 5. Initializing from another vector :
        //CPP program to initialize a vector from another vector.
    vector<int> vect1{10 ,20, 30};
    vector<int> vect2(vect1.begin(), vect1.end());

    for (const auto &value : vect2)
    {
        cout <<value<<" ";
    }
    cout <<endl;
    for (int x : vect2)
    {
        cout <<x<<" ";
    }
    cout <<endl;

    // 6. Initializing all elements with a particular value

    vector<int> vectt1(10);
    int val = 5;
    fill(vectt1.begin(), vectt1.end(), val);

    for (const auto &value : vectt1)
    {
        cout <<value<<" ";
    }
    cout <<endl;
    for (int x : vectt1)
    {
        cout <<x<<" ";
    }
    
    return 0;
}
