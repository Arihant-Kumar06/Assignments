#include<iostream>
using namespace std;
class Stack{
    private:
    int top;
    int size;
    public:
    int arr[1000];
    Stack(int val){
        top=-1;
        size=val;
    }
    void push(int data){
        if(top>size-1){
            cout<<"Stack full"<<endl;
            return;
        }
        else{
            arr[++top]=data;
        }
    }
    int pop(){
        int x; 
               if(top<0){
            cout<<"Stack Empty"<<endl;
        }
        else{
            x=arr[top];
            top=top-1;
            

        }
        return x;

    }
    void display(){
        int i=top;
        while(i>=0){
            cout<<arr[i]<<" ";
            i--;
        }
        cout<<endl;
    }
    int peek(){
        cout<<"top element is "<<arr[top]<<endl;
     return 1;
    }
};
int main(){
    Stack s(5);
    s.push(9);
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.display();
    s.pop();
    s.display();
    return 0;
}