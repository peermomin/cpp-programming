#include <iostream>
using namespace std;

class Book{
    private:
    int pages;

    public:

    Book()
    {   
        cout<<"Default constructor called."<<endl;
        pages = 0;
    }
    void Display()
    {
        cout<<"there are "<<pages<<" pages in the book"<<endl;
    }
};


int main()
{
    Book GOT;
    GOT.Display();
}