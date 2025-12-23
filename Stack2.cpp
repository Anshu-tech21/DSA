#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Stack{
    list<int> ll;

 public:
    
    void push_front(int val){
        ll.push_front(val);
    }

    void pop_front(){
        if (empty()) {
            cout << "ll is empty. Cannot pop.\n";
            return;
        }
        ll.pop_front();
    }

    int top(){
          if (empty()) {
            cout << "Stack is empty. No top element.\n";
            return -1;
        }
        return ll.front();
    }
    

    bool empty(){
        return ll.size() == 0;
    }

    /*void print(){
        if(ll.size()==0){
            cout<<"ll is empty /n";
            return;
        }
        for(int i = ll.size() - 1; i >= 0; i--){
            if(i== ll.size()-1){
                    cout<<"| "<<ll[i]<<" |" << "<-- Top"<<endl;
                    cout<<"|-"<<"--"<<"|"<<endl;
            }else{
            cout<<"| "<<ll[i]<<" |"<<endl;
            cout<<"|-"<<"--"<<"|"<<endl;
            }
        }
        cout<<endl;
    }*/
};

int main(){
    Stack S;

    S.push_front(1);
    S.push_front(2);
    S.push_front(3);
    S.push_front(4);
    
    while(!S.empty()){
        cout<<S.top()<< " ";
        S.pop_front();
    }
    cout<<endl;
    cout<<S.top()<<endl;
    cout<<S.empty()<<endl;
    return 0;
}