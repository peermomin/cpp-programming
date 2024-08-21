#include <iostream>
using namespace std;

class Info{
    int data;
    public:
    Info(int val)
    {
        data = val;
    }
    void operator++(int)
    {
        (this->data)++;
    }
    void display()
    {
        cout<<"data is "<<this->data;
    }
};

int main()
{
    Info obj(10);
    obj++;
    obj++;
    obj.display();

    return 0;
}