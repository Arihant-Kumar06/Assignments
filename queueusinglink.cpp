#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }
};
class Queue{
    private:
    Node* front;
    Node* rear;
    int size;
    int count;

    public:
    Queue(int val){
        rear=front=nullptr;
        size=val;
        count=0;
    }
    void insert(int data){
        Node* temp=new Node(data);
        if(count<size){
            if(rear==NULL){
                front=rear=temp;
                count++;

            }
            else{
                rear->next=temp;
                rear=temp;
                count++;
            }
        }
        else{
            cout<<"Queue full"<<endl;
            return;
        }
    }
    void del(){
        Node* temp=front;
       if(front==NULL){
        cout<<"Queue empty"<<endl;
        exit(1);
       }
       else{
        front=front->next;
        delete(temp);
        count--;
       }
    }
       
      void display(){
        Node* temp=front;
        if(front==NULL){
            cout<<"Queue empty"<<endl;
             return;
        }
        else{
            while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
            }
        }
        cout<<endl;

      }  
        
};

int main(){
    Queue q(6);
    q.insert(5);
    q.insert(15);
    q.insert(4);
    q.insert(6);
    q.insert(7);
    q.insert(20);
    q.insert(21);
    q.display();
    q.del();
    q.display();
return 0;
}