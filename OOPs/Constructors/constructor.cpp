#include <iostream>
using namespace std;

class Employ{
    private:
    string employName;
    int employAge;
    public:


    Employ()
    {
        cout<<"no argument constructor called"<<endl;
        employAge = 0;
        employName = '\0';
    }


    Employ(string name,int age)
    {
        cout<<"argumented constructor called"<<endl;
        employName = name;
        employAge = age;
    }

    void getPromotion()
    {
        if(employAge > 25)
        cout<<employName<<" you are promoted"<<endl;
        else
        cout<<employName<<" you are not promoted"<<endl;
    }

};

int main()
{
     Employ firstEmploy("Momin",21);
     Employ secondEmploy("Muneeb",26);

    firstEmploy.getPromotion();
    secondEmploy.getPromotion();

    Employ third;
    

    return 0;
}