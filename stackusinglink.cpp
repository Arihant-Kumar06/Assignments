#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next= nullptr;
    }
};
    class Stack{
    private:
     Node* top;
    int size;
    int count;
    
    public:
   
    Stack(int val){
        top=nullptr;
        size=val;
        count=0 ;
    }
   void push(int data){
    if(count != size){ 
        Node*temp=new Node(data);
        temp->next=top;
        top=temp;
        count++;
    }
    else{
        cout << "stack full" << endl;
    }
}

    void pop(){
      if(top!=NULL)
       { Node*temp=top;
        top=temp->next;
        free(temp);
       }
       else{
        cout<<"stack empty";
       }
    }
    void peek(){
        cout<<top->data;
    }
    void display(){
        Node*temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    
};
int main(){
    Stack s(6);
    s.push(2);
    s.push(4);
     s.push(12);
      s.push(16);
       s.push(19);
       s.push(20);
       s.push(21);
       s.display();
       cout<<endl;
       cout<<"top element is ";
       s.peek();
    return 0;
}