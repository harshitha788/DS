#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to search: ";
    cin>>key;   
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            index=i;
            break;
        }
    }
    if(index==0 && arr[0]!=key)
    {
        cout<<"Key not found"<<endl;
    }
    else
    {
        cout<<"Key found at index: "<<index<<endl;
    }
}