#include<iostream>
using namespace std;

void reverseArray(int nums[],int size){
  int start=0,end = size-1;

  while(start < end){
    swap(nums[start],nums[end]);
    start++;
    end--;
  }
}

int main(){

    int nums[]={1,2,3,4,5,6,7};
    int size = 7;

    reverseArray(nums,size);

    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}