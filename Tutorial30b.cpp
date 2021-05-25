#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    friend double Distanceof(Point a, Point b);
    void DisplayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

double Distanceof(Point a, Point b)
{
    int A = (a.x - b.x) * (a.x - b.x);
    int B = (a.y - b.y) * (a.y - b.y);
    double X = sqrt(A + B);
    return X;
}

int main()
{
    Point p(1, 1);
    p.DisplayPoint();

    Point q(4, 5);
    q.DisplayPoint();

    cout << "The distance between points p and q is " << Distanceof(p, q) << endl;
    return 0;
}
