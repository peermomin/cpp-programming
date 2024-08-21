#include <iostream>
using namespace std;

int main()
{
    int val = 10;
    cout<< &val <<endl;
    cout<< val <<endl;
    int* ptr = &val;
    *ptr = 20;
    cout<< ptr <<endl;
    cout<< val <<endl;


    system("pause>0");
    return 0;
}