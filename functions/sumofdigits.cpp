#include<iostream>
using namespace std;
int sumofdigits(int n){
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        sum+=lastdigit;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Sum of digits of "<<n<<" is: "<<sumofdigits(n)<<endl;
    return 0;
}