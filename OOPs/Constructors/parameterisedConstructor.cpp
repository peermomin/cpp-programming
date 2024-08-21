#include<iostream>
using namespace std;

class Book{
    private:
    string Name;
    string Author;
    public:
    Book(string name,string author)
    {
        Name = name;
        Author = author;
    }

    void display()
    {
        cout<<"The name of book is "<<Name<<endl;
        cout<<"It author is "<<Author<<endl;
    }
};

int main()
{

    Book b1("Air Bender","Jhon");
    b1.display();
}