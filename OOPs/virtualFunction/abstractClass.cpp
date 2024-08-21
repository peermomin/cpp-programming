#include <iostream>
using namespace std;

class smartphone{
    public:
    virtual void selfie() = 0;
};
class Andriod:public smartphone{
    public:
    void selfie()
    {
        cout<<"Taking Selfie On Andriod"<<endl;
    }
};
class Apple:public smartphone{
    public:
    void selfie()
    {
        cout<<"Taking Selfie On Apple"<<endl;
    }
};

int main()
{
    smartphone* baseptr1 = new Andriod();
    smartphone* baseptr2 = new Apple();

    baseptr1->selfie();
    baseptr2->selfie();
}