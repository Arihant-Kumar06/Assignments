#include<iostream>
using namespace std;
class Queue{
    private:
    int rear,front,size;
    public:
    int arr[1000];
    Queue(int data){
        rear=front=-1;
        size=data;
    }
    void push(int data){
        if(rear>size-1){
            cout<<"Queue full"<<endl;
        }
        else{
            if(rear==-1){
                front++;
                rear++;
                arr[rear]=data;
            }
            else{
                arr[++rear]=data;
            }
        }
    }
    int pop(){
        int x; 
               if(rear==-1){
            cout<<"Queue Empty"<<endl;
        }
        else{
            x=arr[front];
            front=front+1;
            

        }
        return x;

    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(4);
    q.display();
    q.pop();
    q.display();
    q.push(9);
    q.push(11);
    q.display();
    return 0;
}