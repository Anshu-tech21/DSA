#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

    Node(int val){
        data=val;
        next=prev=NULL;
    }
};
class DoublyLinkedList{
    Node* head;
    Node* tail;

    public:
      DoublyLinkedList(){
        head=tail=NULL;
      }

      void push_front(int val){
         Node* newNode = new Node(val);
         if(head==NULL){
            head=tail=newNode;
         }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
         }
      }

      void push_back(int val){
        Node* newNode = new Node(val);
         if(head==NULL){
            head=tail=newNode;
         }else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
         }
      }

      void pop_front(){
        if(empty()){
            cout<<"DLL is empty ! \n";
            return;
        }
        Node* temp = head;
        head=head->next;

        if(head !=NULL){
            head->prev =NULL;
        }

        temp->next=NULL;
        delete temp;
      }

      void pop_back(){
        if(empty()){
             cout<<"DLL is empty ! \n";
            return;
        }

        Node* temp = tail;
        tail=tail->prev;

        if(tail !=NULL){
            tail->next = NULL;
        }
        temp->prev=NULL;
        delete temp;
      }
      void insert(int val , int pos){
        if(pos < 0){
            cout<<"Invalid postion\n";
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i = 0 ; i<pos-1;i++){
            if(temp==NULL){
                cout<<"Invalid position\n";
                return;
            }
            temp = temp->next;
        }
        if(temp==tail){
            push_back(val);
            return;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        newNode->prev =temp;

        temp->next->prev = newNode;
        temp->next = newNode;
      }
      bool empty(){
        return head==NULL;
      }
    void print(){
        if(/*head == NULL*/empty()){
            cout<<"DL is empty \n";
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    DoublyLinkedList dl;
    dl.push_front(1);
    dl.push_front(2);
    dl.push_front(3);

    dl.print();
    dl.push_back(4);
    dl.push_back(5);
    dl.print();
    
    dl.pop_front();
    dl.print();

    dl.pop_back();
    dl.print();

    dl.insert(6,1);
    dl.print();
    return 0;
}