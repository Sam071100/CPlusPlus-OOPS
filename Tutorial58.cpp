// "Abstract Base CLass and Pure Virtual Function"
/*
An abstract class is a class that is designed to be specifically used as a base class. An abstract class contains at least one pure virtual function. You declare a pure virtual function by using a pure specifier (= 0) in the declaration of a virtual member function in the class declaration.
*/
#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void Display()=0; // Do nothing function ---> Pure Virtual Function:::: This function will impose us to write the new version of the Display() function in the derived class.
    // {
    //     cout << "Bewakoof Base Class ka display function call Ho raha hai, Virtual keyword laga function mai tabhi respective display function call hoga\n";
    // }
};

// Is tarah ki class ko jisko banaya isliye jata hai ki iske aur derived classes bane aur usme aur features add ho, use Bolte hai Abstract base class. Iss class mai kam se kam ek pure virtual function hona hi chahiye, Toh iss Class mai aisa virtual function dalna hi padega jisko hame derived class mai overwrite karna hi pade toh uss virtual function ko Pure Virtual Function kehte hai.

// Pure virtual function aisa virtual function hota hai jisse hame derived class mai uska naya version BANANA HI PADE. Agar pure virtual function base class mai declare karke hamne derived class mai us function ko define aur declare nahi kiya toh COMPILER ERROR throw karega.

class CWH_Video : public CWH
{
    float videoLength;

public:
    CWH_Video(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void Display()
    {
        cout << "This is an Amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 Stars " << endl;
        cout << "Length of this video is : " << videoLength << " minutes" << endl;
    }
};

class CWH_Text : public CWH
{
    int words;

public:
    CWH_Text(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void Display()
    {
        cout << "This is an Amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 Stars " << endl;
        cout << "No. of words in this text tutorial is: " << words << " words " << endl;
    }
};

int main()
{
    string title;
    float ratings, vlen;
    int words;

    //  For Code with Harry videos
    title = "C++ Tutorials";
    vlen = 4.56;
    ratings = 4.89;
    CWH_Video djVideo(title, ratings, vlen);
    // djVideo.Display();

    // For Code with Harry Text
    title = "C++ Text Tutorials";
    words = 433;
    ratings = 4.9;
    CWH_Text djText(title, ratings, words);
    // djText.Display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->Display();
    tuts[1]->Display();

    return 0;
}

// Rules for Virtual Functions:
// 1. They cannot be static
// 2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used like here in this case.
// 5. If a virtual function is defined in a base class, there is no neccessity of redefining it in the derived class.
