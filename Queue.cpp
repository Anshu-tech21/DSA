#include<iostream>
#include<queue>
#include<deque>
using namespace std;

class Node{
    public:
        int data;
        Node* next ;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
        head = tail = NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);
        if(empty()){
           head = tail = newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop(){
        if(empty()){
            cout<<"Queue is empty !";
            return;
        }
        Node* temp = head;
        head=head->next;
        delete temp;
    }

    int front(){
        if(empty()){
            cout<<"Queue is empty !";
            return -1;
        }
            return head->data;
        
    }
    bool empty(){
        /*if(head == NULL){
            return true;
        }else{
            return false;
        }*/

        return head == NULL;
    }
};
int main(){
    //queue<int> q;
    /*deque<int> dq; -- Allows to push from front and rear 
                        Allows to pop from front and rear.*/
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    /*dq.push_back(1);
      dq.push_back(2);
      dq.push_back(3);
      dq.push_front(4);
      cout<<dq.front()<< " " << dq.back()<<endl;

      dq.pop_back();
      cout<<dq.front()<< " " << dq.back()<<endl;
      ;*/

    cout<<endl;
    return 0;
}