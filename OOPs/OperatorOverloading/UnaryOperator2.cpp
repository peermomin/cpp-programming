#include <iostream>
using namespace std;

class Trees{
    string name;
    public:
    Trees(string tname)
    {
        name = tname;
    }
    bool operator==(Trees &T2)
    {
        return (this->name == T2.name);
    }
};

int main()
{
    Trees tree1("appletree");
    Trees tree2("appletree");
    Trees tree3("banana");

    if(tree1==tree3)
    cout<<"both are equal"<<endl;
    else
    cout<<"Not Equal"<<endl;
}