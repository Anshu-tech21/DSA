#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

int main(){
    /*
    char str1[]={"Hello"};

    cout<<str1[3]<<endl;
    
    char str[20] ;
    
    cout<<"Enter a string : ";
    cin.getline(str,20,'$');
    cout<<str<<endl;
    for(char ch : str){
        cout<<ch<<" ";
    }
    */

     string str1={"Hello its Anshu"};
     cout<<str1<<endl;
     cout<<"The length of str1 : "<<str1.length()<<endl;
     
     
     string str ;
     cout<<"Enter a String : ";
     getline(cin,str,'$');
     cout<<"Output String : "<<str<<endl;

     string str2 = {"Anshu"};
     string str3 = {"Tingre"};

     string str4=str2+str3; //concatination
     cout<<str4<<endl;

     string r ="College";

     reverse(r.begin(),r.end());  //Reverse function of String.
     cout<<r<<endl;
    return 0;
    
}