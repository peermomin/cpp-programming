#include<iostream>
using namespace std;

class company{
    protected:
    string name;
    int valuation;
    public:
    company(string c,int v)
    {
        name = c;
        valuation = v;
    }
    void print()
    {
        cout<<"Name of Company is "+name<<endl;
        cout<<"company valuation is "<<valuation;
        cout<<" billions"<<endl;
    }
};
class product:public company{
    string productName;
    public:
    product(string name,int valuation,string product):company(name,valuation)
    {
        productName = product;
    }
     void print()
    {
        cout<<"Name of Company is "+name<<endl;
        cout<<"company valuation is "<<valuation;
        cout<<" billions"<<endl;
        cout<<name<<" make "<<productName<<endl;
    }
};

int main()
{
    company cmpy("Andriod",200);
    cmpy.print();
    product obj("Apple",100,"iphones");
    obj.print();
}