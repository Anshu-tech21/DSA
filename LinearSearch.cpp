#include<iostream>
using namespace std;

int linearSearch(int nums[], int size,int target){
   for(int i = 0 ; i < size;i++){
    if(nums[i]==target){
        return i;
    }
   }
   return -1;
}

int main(){

    int nums[]={4,2,7,8,1,2,5};
    int size= 7;
    int target = 8;
    
    cout << linearSearch(nums,size,target)<<endl;
    return 0;
}