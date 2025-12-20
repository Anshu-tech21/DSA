#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList{
    Node* head;
    Node* tail;

 public:
    LinkedList(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
              head = tail = newNode;
        }else{
            tail->next = newNode; 
            tail = newNode;
        }
    }

    void Pop_front(){
        Node* temp = head;
        if(temp==NULL){
            cout<<"Nothing to delete !"<<endl;
            return;
        }else{
            head = head->next;
            temp-> next = NULL;
            delete temp;
        }
    }

    void Pop_back(){
        if(head==NULL){
            cout<<"Nothing to delete !";
            return;
        }

        Node* temp = head;

        while(temp->next != tail){
            temp=temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void insert(int val , int pos){
        if(pos < 0){
            cout<<"invalid pos\n";
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }

        Node* temp = head ;
        for(int i=0; i<pos-1;i++){
            if(temp == NULL){
                cout<<"invalid pos\n";
                return;
            }
            temp=temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }

    int search(int key){
        int idx = 0;
        Node* temp = head;
        while(temp != NULL){
            if(temp->data==key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
    void print(){
        Node* temp = head;

        while (temp != NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
   LinkedList list;

   list.push_front(3);
   list.push_front(2);
   list.push_front(1);
   
   list.push_back(4);
   list.push_back(5);
   
   list.insert(8,1);

   
  /* list.Pop_front();
   list.Pop_back();*/

   list.print();
   cout<<"The index is : "<<list.search(8);
   return 0;
}