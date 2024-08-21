#include <iostream>
using namespace std;

class B;
class A{
    private:
    int a;
    public:
    A(){
        a=0;
    }
    friend void B:: showA(A *ptr);
};

class B{
    private:
    int b;
    public:
    void showA(A *ptr)
    {
        cout<<ptr->a<<endl;
    }
};


int main()
{   
    A Obj1;
    B obj2;
    obj2.showA(&Obj1);
}