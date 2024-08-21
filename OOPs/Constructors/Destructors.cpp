#include <iostream>
using namespace std;

class student{
    string Name;
    int *rate;
    int rates;

    public:
    student(string name)
    {   
        
        Name = name;

        rates = 2;
        rate = new int[rates];
        rate[0] = 1;
        rate[1] = 2;
        cout<<Name + "constructor is called for object "<<endl;
    }
    ~student()
    {   
        
        delete []rate;
        rate = nullptr;
        cout<<Name + "destructor is called"<<endl;
    }
};

int main()                                    
{
       student s1("Jhon");
       student s2("Amy");

       {
        student s3("Randy");
       }

}