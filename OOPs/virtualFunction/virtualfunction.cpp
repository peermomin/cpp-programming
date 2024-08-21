#include <iostream>
using namespace std;

class Instrument{
    public:
    virtual void makeSound(){
        cout<<"Instrument plays"<<endl;
    }
};
class Guitar:public Instrument{
    public:
    void makeSound()
    {
        cout<<"Guitar Plays"<<endl;
    }
};

int main()
{
    Instrument* Baseptr;
    Guitar obj;
    Baseptr = &obj;
    Baseptr->makeSound();
}