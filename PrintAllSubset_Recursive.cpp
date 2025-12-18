#include<iostream>
#include<vector>
using namespace std;

void PrintSubset(vector<int> &arr , vector<int> &ans , int i){
      if(i == arr.size()){
        for(int val : ans){
            cout<< val <<" ";
        }
        cout<<endl;
        return; 
      }

      ans.push_back(arr[i]);
      PrintSubset(arr,ans,i+1);

      ans.pop_back();
      PrintSubset(arr,ans,i+1);
}

int main(){
    vector<int> arr = {1,2,3};
    cout<<arr.size() << endl;
    vector<int> ans;
   /* for(int val : arr){
        cout<<val<<" ";
    }*/

    PrintSubset(arr,ans,0);

}