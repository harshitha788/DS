#include<iostream>
using namespace std;
int main()
{
    int nums[] = {3, 5, 1, 8, 2};
    int size=5;
    int smallest=nums[0];
    int largest=nums[0];
    int small_index=0;
    int large_index=0;
    for (int i=0;i<size;i++)
    {
        if(nums[i]<smallest){
            smallest=nums[i];
            small_index=i;
        }
        if(nums[i]>largest){
            largest=nums[i];
            large_index=i;
        }
    }
    cout<<"smallest number is "<<smallest<<" at index "<<small_index<<endl;
    cout<<"largest number is "<<largest<<" at index "<<large_index<<endl;
}