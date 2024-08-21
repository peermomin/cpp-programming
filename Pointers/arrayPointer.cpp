#include <iostream>
using namespace std;


int main()
{   
    int lucky_numbers[5] = {1,2,3,4,5};
    cout<<lucky_numbers<<endl;
    cout<<&lucky_numbers[0]<<endl;
    //Name of the array is the address of the fisrt element of that array.
    cout<<*lucky_numbers<<endl; 
    cout<<lucky_numbers[0]<<endl;

    cout<< lucky_numbers[2]<<endl;
    cout<< *(lucky_numbers+2)<<endl;
    system("pause>0");
    return 0;
}