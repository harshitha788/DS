#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r){
    int factn=factorial(n);
    int factr=factorial(r);
    int factnminusr=factorial(n-r);
    return factn/(factr*factnminusr);
}
int main(){
    int n,r;
    cout<<"Enter n and r:";
    cin>>n>>r;
    cout<<"nCr of "<<n<<" and "<<r<<" is: "<<nCr(n,r)<<endl;
   
}