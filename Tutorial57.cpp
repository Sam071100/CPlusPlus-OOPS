// "Virtual Function Example + Creation Rules"
#include <iostream>
#include <string>
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
          rating =r;
      }
    /*   virtual */void Display()
    {
        cout <<"Bewakoof Base Class ka display function call Ho raha hai, Virtual keyword laga function mai tabhi respective display function call hoga\n";
    }
};

class CWH_Video : public CWH
{
    float videoLength;
    public:
      CWH_Video(string s, float r, float vl) : CWH(s,r)
      {
          videoLength = vl;
      }
      void Display()
      {
          cout <<"This is an Amazing video with title "<<title<<endl;
          cout <<"Ratings: "<<rating<<" out of 5 Stars "<<endl;
          cout <<"Length of this video is : "<<videoLength<<" minutes"<<endl;
      }
};

class CWH_Text : public CWH
{
    int words;
    public:
      CWH_Text(string s, float r, int wc) : CWH(s,r)
      {
          words = wc;
      }
      void Display()
      {
          cout <<"This is an Amazing text tutorial with title "<<title<<endl;
          cout <<"Ratings of this text tutorial: "<<rating<<" out of 5 Stars "<<endl;
          cout <<"No. of words in this text tutorial is: "<<words<< " words "<<endl;
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
