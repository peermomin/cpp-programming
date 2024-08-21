#include <iostream>
using namespace std;


void getMinMax(int* array, int len, int* min , int* max)
{   
    for(int i = 0; i < len ; i++)
    {
        if(array[i] > *max)
            *max = array[i];
        else if(array[i] < *min)
            *min = array[i];
    }
   
}


int main()
{
    int arr[] = {10,20,40,80,500,-1};
    int min = arr[0];
    int max = arr[0];
    getMinMax(arr,sizeof(arr)/sizeof(arr[0]),&min,&max);
    cout<<"Minimum Number in array is "<<min<<endl;
    cout<<"Miximum Number in array is "<<max<<endl;
    return 0;

}