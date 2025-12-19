#include<iostream>
#include<vector>

using namespace std;

void getpermutation(vector<string> &nums , vector<vector<string>> &ans , int idx){

    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    
    for(int i = idx ; i<nums.size(); i++){
        swap(nums[idx],nums[i]);
        getpermutation(nums,ans,idx+1);

        swap(nums[idx],nums[i]);

    }

}
int main(){
    vector<string> nums = {"a", "b", "c"};
    vector<vector<string>> ans;

    getpermutation(nums,ans,0);

    for(auto permutation : ans){
        for(auto s : permutation){
            cout<<s<<" ";
        }
        cout<<endl;
    }
}