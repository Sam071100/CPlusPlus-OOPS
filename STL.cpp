#include <bits/stdc++.h>
using namespace std;

//Comparator function
bool f(int x, int y)
{
    return x > y;
}

void VectorDemo()
{
    // Intializing vectors in 6 ways:
    // 1.
    vector<int> B(5, 0);
    for (int x : B)
    {
        cout << x << " ";
    }
    // 2.
    vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);
    for(int x : vect)
    {
        cout <<x<<" ";
    }

    // 3.
    vector<int> A = {11, 2, 3, 14};
    // Accessing the member of vector
    cout << A[1] << endl;

    // 4.
    int arr[] ={10,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vec(arr, arr+n);

    // 5.
    vector<int> vect1 {10,20,30};
    vector<int> vect2(vect1.begin(), vect1.end());

    // 6.
    vector<int> vectt(10);
    int value =5;
    fill(vectt.begin(), vectt.end(), value);

    // 7. Joining the two vectors into third vector
    vector<int> vector1 {10,20,30};
    vector<int> vector2 {40,60,50};
    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());
    vector<int> vector3(vector1.size() + vector2.size());
    vector<int>::iterator it1;
    it1 = set_union(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), vector3.begin());
    for (int x : vector3)
    {
        cout <<x<<" ";
    }
    

    sort(A.begin(), A.end()); // O(NlogN)

    //Binary Search O(logN)
    bool present = binary_search(A.begin(), A.end(), 3); // returns true as 3 is present
    present = binary_search(A.begin(), A.end(), 4);      // returns false as 4 is not present in the array

    A.push_back(100); // inserts 100 at back
    A.push_back(100); // inserts 100 at back
    A.push_back(100); // inserts 100 at back
    A.push_back(100); // inserts 100 at back
    A.push_back(100); // inserts 100 at back
    A.push_back(123); // inserts 100 at back

    // Lowerbounds and upperbounds are performed after sorting in O(LogN)
    // I want to get the first occurence of 100 and it return iterator
    // vector<int>::iterator it = lower_bo1und(A.begin(), A.end(), 100); // Gives >= Searched value
    auto it = lower_bound(A.begin(), A.end(), 100);                   // Gives >= Searched value
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); //Gives > Searched Value

    // Iterators are same as pointers
    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl; //5 :: By this we can know how many times 100 is occuring

    // Sorting the vector in reverse order by overloading and passing the comparator function
    sort(A.begin(), A.end(), f);

    vector<int>::iterator it3;

    for (it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << endl;

    for (int x : A)
    {
        x++;
        cout << x << " ";
    }
    cout << endl;

    for (int &x : A)
    {
        x++; // To increment the value stored in the vector call x by reference
        cout << x << " ";
    }
    cout << endl;

    for (it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << endl;
}

void SetDemo()
{
    // Each opertion will be in O(Log N) time
    set<int> S; // Sets are sorted and contains unique elements
    S.insert(1);
    S.insert(3);
    S.insert(3);
    S.insert(4);
    S.insert(-1);

    for (int x : S)
    {
        cout << x << " ";
    }
    cout << endl;

    // Set<int>::iterator it; same as-> auto it;
    auto it = S.find(-1); // Tries to find the searched value and returns the iterator the searched value if present and if the Seached value is not present then iterator will be returned to S.end()

    if (it == S.end())
    {
        cout << "Element is not present\n";
    }
    else
    {
        cout << *it << " is present\n";
    }

    auto it2 = S.lower_bound(-1); //1
    auto it3 = S.upper_bound(-1); //1
    auto it4 = S.upper_bound(4);  //returns iterator to S.end()

    if (it4 == S.end())
    {
        cout << "This is the last element in the Set, So no upper bound exists\n";
    }

    cout << *it2 << " " << *it3 << " " << *it4 << endl;
    S.erase(3);
    // S.clear(); Deletes all the elements in the set
    for (int x : S)
    {
        cout << x << " ";
    }
}

void MapDemo()
{
    // Maps one value to other in O(Log N) time
    map<int, int> A;
    A[1] = 100; // Here 1 is the key and 100 is the value crossponding the key
    A[2] = -1;
    A[3] = 200;
    A[41662] = 1000;

    A.find(2);
    A.find(5);

    map<char, int> cnt;
    string x = "shubham samrat";

    // For each character in my string x just increment to know how many times the character appears in the string
    for (char c : x)
    {
        cnt[c]++;
    }
    cout << cnt['a'] << " " << cnt['s'] << endl;
    // Pair is different from Map
}
int main()
{
    // Power of STL
    /*[x, y] --> Find the interval in which the query exists
    Question --> add[2,3]
    add[10,20]
    add[30,400]
    add[401,450]
    Find the interval in which 401 is present???
    */
    set<pair<int, int>> S;
    // Pair {a,b} is smaller than pair {c,d} iff (a < c) or (a==c and b < d)
    // Pair's elements are accessed by S.first and S.second

    S.insert({401, 450});
    S.insert({10, 20});
    S.insert({30, 400});
    S.insert({2, 3});
    // FInding in which interval point is present
    int point;
    cout << "Enter the point to be Searched\n";
    cin >> point;
    auto it = S.upper_bound({point, INT_MAX});
    if (it == S.begin())
    {
        cout << "The given point is not lying in any of the given interval\n";
        return 0;
    }

    it--;
    pair<int, int> current = *it;
    if (current.first <= point && point <= current.second)
    {
        cout << "Found in this interval: " << current.first << " " << current.second << endl;
    }
    else
    {
        cout << "The given point is not lying in any of the given interval\n";
    }

    return 0;
}
