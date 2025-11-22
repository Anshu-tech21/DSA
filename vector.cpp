#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int>vec;
    //vector<int>vec(5,0) ---> 5 is the size of vec , 0 is the value
    vector<int>vec={1,2};

    vec.push_back(21);
    vec.push_back(35);
     cout<<"Before POP_BACK : ";
    for(int val : vec){
       
        cout<<val<< " ";
    }
    vec.pop_back();
    cout<<endl;
    cout<<"After POP_BACK  : ";
    for(int val : vec){
        
        cout<<val<< " ";
    }
    cout<<endl;
    cout<<"The Size of vector is : "<<vec.size()<<endl;
    cout<<"The Capacity of vector is : "<<vec.capacity();
    return 0;
}