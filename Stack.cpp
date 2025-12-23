#include<iostream>
#include<vector>

using namespace std;

class Stack{
    vector<int> stack;

 public:
    
    void push_back(int val){
        stack.push_back(val);
    }

    void pop_back(){
        if (empty()) {
            cout << "Stack is empty. Cannot pop.\n";
            return;
        }
        stack.pop_back();
    }

    int top(){
        return stack[stack.size()-1];
    }

    bool empty(){
        return stack.size() == 0;
    }

    void print(){
        if(stack.size()==0){
            cout<<"Stack is empty /n";
            return;
        }
        for(int i = stack.size() - 1; i >= 0; i--){
            if(i== stack.size()-1){
                    cout<<"| "<<stack[i]<<" |" << "<-- Top"<<endl;
                    cout<<"|-"<<"--"<<"|"<<endl;
            }else{
            cout<<"| "<<stack[i]<<" |"<<endl;
            cout<<"|-"<<"--"<<"|"<<endl;
            }
        }
        cout<<endl;
    }
};

int main(){
    Stack S;

    S.push_back(1);
    S.push_back(2);
    S.push_back(3);
    S.push_back(4);
    
    S.print();

    S.pop_back();

    S.print();
    


}