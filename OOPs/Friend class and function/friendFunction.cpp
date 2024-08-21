#include <iostream>
using namespace std;

class Circle{
    float Radius;
    double area;
    public:
    void setRadius(float radius)
    {
        Radius = radius;
        area = 3.14*radius*radius;
    }
    friend void printArea(Circle&);
};
void printArea(Circle &c)
{
    cout<<"Area of circle is "<<c.area<<endl;
}

int main()
{
    Circle c1;
    c1.setRadius(5);
    printArea(c1);
}