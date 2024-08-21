#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter array size: ";
    cin>>size;
    cout<<endl;

    int* array = new int[size];
        cout<<"enter array elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<"array["<<i<<"]";
        cin>>array[i];
    }
   cout<<"array elements are:"<<endl;
    for(int j = 0; j < size; j++)
    {
     
        cout<<array[j]<<" ";
    }
    

    delete[]array;
    array = NULL;



    return 0;


}