#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        //spaces =n-i-1
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //stars = 2*i+1
        for(int k=0;k<2*i+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}