#include<iostream>
using namespace std;
int minoftwo(int a, int b){ //parameters
    if(a<b){
        return a;
    }
    else{
        return b;
    }
    }
int main(){
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    cout<<"Minimum of a and b is:"<<minoftwo(a,b)<<endl; //arguments
    return 0;
}