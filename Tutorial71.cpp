#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector <T> &v)
{
    cout <<"Displaying this Vector\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout <<v[i]<<" ";
        // cout <<v.at(i)<<" ";
    }
    cout <<endl;
}

int main()
{
    // Ways to create a vector: (Resizable Array)
    vector<int> vec1; // Zero length integer vector
    int element,size=5;
    
    // cout <<"Enter the size of the vector\n";
    // cin >>size; 
    // for (int i = 0; i < size; i++)
    // {
    //     cout <<"Enter an elements to add to this vector\n";
    //     cin >>element;
    //     vec1.push_back(element);
    // }
    //     //vec1.pop_back();

        // display(vec1);
        // vector <int> ::iterator iter= vec1. begin(); // Creating the Iterator
        // //vec1.insert(iter+1, 566);
        // vec1.insert(iter+1,5, 566);// Inserts the 5 copies of 566 beginning the position of the iterator.
        // display(vec1);

    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('a');
    display(vec2);
    vector<double> vec4(4); // 4-element double vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    display(vec3);
    vector<int> vec5(6,3); // 6-element vector of 3s 
    display(vec5);
    cout <<vec5.front()<<endl;// Returns the first element of the vector.
    cout <<vec5.back()<<endl; // Returns the last element of the vector
    cout <<vec4.size();// Returns the size of the vector

    
    
    return 0;
}
