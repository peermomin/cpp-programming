#include <iostream>
#include <string>
using namespace std;


void print(void* ptr,string type)
{
     if (type == "int") 
        cout << *((int*)ptr);
     else if (type == "char") 
        cout << *((char*)ptr);
     else if (type == "float") 
        cout << *((float*)ptr);
     else if (type == "double") 
        cout << *((double*)ptr);
     else if (type == "bool") 
        cout << *((bool*)ptr);
    else if (type == "double")
        cout<< *((double*)ptr);
     else 
        cout << "Unsupported type";

        cout<<endl;
}

int main()
{
    int val = 45;
    char letter = 'u';
    float pi = 3.141592653589793;
    double ratio = 3.141592653589793;
    print(&val,"int");
    print(&letter,"char");
    print(&pi,"float");
    print(&ratio,"double");

    system("pause>0");
    return 0;
}
/*
void pointer stores the address of any type of variable,
but we can't derefrence it --firts we need to typecast it .
*/