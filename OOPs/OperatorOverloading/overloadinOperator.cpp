#include <iostream>
using namespace std;
class Names{
    string Name;
    public:
    // Names():Name('\0'){}
    Names(string name)
    {
        Name = name;
    }
    Names operator+(Names &n2)
    {
        return (this->Name +" "+ n2.Name);
    }
     
     void display()
     {
        cout<<this->Name<<endl;
     }

};
int main()
{
    Names n1("Peer");
    Names n2("momin");
   Names str = n1+n2;

    str.display();

}