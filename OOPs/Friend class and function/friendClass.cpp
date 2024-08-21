#include <iostream>
using namespace std;

class car{
  string color;
  float milage;
public:
  void setValues(string c,float m)
  {
    color = c;
    milage = m;
  }
  friend class nano;
};
class nano{
public:
   void print(car obj)
   {
    cout<<"Car color is "<<obj.color<<endl;
    cout<<"Car milage is "<<obj.milage<<endl;
   }
};

int main()
{
    car obj;
    obj.setValues("Red",40);

    nano item;
    item.print(obj);

}