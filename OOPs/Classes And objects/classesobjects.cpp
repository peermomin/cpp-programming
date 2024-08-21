#include <iostream>
#include <list>
using namespace std;

class Branch{
    public:
    string branchName;
    int numOfStudents;
    list<string> Subjects;
};

int main()
{
    Branch obj;
    obj.branchName = "computer science";
    obj.numOfStudents = 60;
    obj.Subjects = {"c++","java","discreateMath","webDev"};


    cout<<"my branch is:"<<obj.branchName<<endl;
    cout<<"there are "<<obj.numOfStudents<<"students in my branch"<<endl;
    cout<<"My Books:"<<endl;
    for(string book:obj.Subjects)
    {
        cout<<book<<endl;
    }

    return 0;
}