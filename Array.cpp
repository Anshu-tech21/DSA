#include<iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[size];
  
    
    int sizes=sizeof(marks);
    cout<<sizes<<endl;
    
    for(int i =0;i<size;i++){
        cout<<"Enter the marks : ";
        cin>>marks[i];
    }
    for(int i = 0 ; i<size ; i++){
        cout<<"The marks are : "<<marks[i]<<endl;
    }
    
    return 0;
}