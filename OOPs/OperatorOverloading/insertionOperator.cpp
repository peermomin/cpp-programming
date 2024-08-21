#include <iostream>
using namespace std;

class Car{
    public:
    string Color;
    int Milage;
    Car(string color,int milage)
    {
        cout<<"parameter constructor called"<<endl;
        Color = color;
        Milage = milage;
    }
};

ostream& operator<<(ostream &COUT,Car &NANO){
    COUT<<"color is "<<NANO.Color<<endl;
    COUT<<"milage is "<<NANO.Milage<<endl;
    return COUT;
}

int main()
{
    Car nano("yellow",30);
    cout<<nano;

    return 0;
}