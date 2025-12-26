#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

int main(){

  map<string,int> m;
  m["TV"]=100;
  m["Laptop"]=50;
  m["Phone"]=1000;

  m.insert({"Camera",50});
  m.emplace("camera",60);

  m.erase("camera");
  //m.insert({"TV",100});

  for(auto p : m){
  cout<<p.first<<" "<<p.second<<endl;
  }
  if(m.find("Laptop") !=m.end()){
    cout<<"Found \n";
  }else{
    cout<<"Not Found \n";
  }
  cout<<"Count of keys : "<<m.count("Camera")<<endl;
  cout<<"Value of key  : "<<m["Laptop"]<<endl;
  cout<<"Size : " << m.size()<<endl;
  cout<<"Empty : "<<m.empty()<<endl;
 /* map<string,int> m ;

  m["Apple"]=5;
  m["Banana"]=10;

  for(auto a : m){
    cout << a.first<<" "<<a.second<<endl;
  }
  return 0;*/

 /* string s = "hello";

  map<char,int> freq;

  for(char c : s){
    freq[c]++;
  }

  for(auto p:freq){
    cout<<p.first<<"->"<<p.second<<endl;
  }

*/


}