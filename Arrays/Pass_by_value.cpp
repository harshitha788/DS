#include<iostream>
using namespace std;
void modifyArray(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        arr[i]=arr[i]*2;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    modifyArray(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}
