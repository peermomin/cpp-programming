#include <iostream>
using namespace std;

class fruits{
    string* nameptr;
    public:
    fruits(string name)
    {
        cout<<"contructor called"<<endl;
        nameptr = new string(name);
    }
    fruits(const fruits &f1)
    {
        cout<<"copy constructor called"<<endl;
        nameptr = new string(*(f1.nameptr));
    }
    ~fruits()
    {
        cout<<"destructor called"<<endl;
        delete nameptr;
    }
    void display()
    {
        cout<<"name of fruit is "+ *(nameptr)<<endl;
    }
};

int main()
{
        fruits f1("Mango");
        f1.display();
        fruits f2(f1);
        f2.display();
        return 0;
}