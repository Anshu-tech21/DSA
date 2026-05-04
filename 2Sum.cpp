#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int>& nums, int target){
    int n = nums.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                cout << i << " " << j << endl;
                return;
            }
        }
    }   
    cout<<"No target";
}

int main(){
    vector<int> nums = {2,5,3,8,4};
    int target = 20;
    twoSum(nums,target);
}