#include<iostream>
using namespace std;
int main(){
    int nums[]={10,20,5,1,25};
    int size=5;
    int smallest=nums[0];
    int largest=nums[0];
    for (int i=0;i<size;i++){
        //if(nums[i]<smallest){
          //  smallest=nums[i];
        //}
        smallest=min(smallest,nums[i]);
        largest=max(largest,nums[i]);
    }
    cout<<"smallest number is "<<smallest<<endl;
    cout<<"largest number is "<<largest<<endl;
}