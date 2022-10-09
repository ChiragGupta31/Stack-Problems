//Stack implementation using Array

#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int size;
    int *arr;

    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];

    }


    void push(int element){
        if(size-top > 1){
            top++;
            arr[top]=element;

        }

        else{
            cout<<"Stack Overflow"<<endl;
        }
    }


    void pop(){
        if(top>=0){
            top--;

        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }

        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        
    }

    bool empty(){
        if(top==-1){
            return true;
            // cout<<"Stack is empty"<<endl;
        }
        else{
            // cout<<"Stack is not empty "<<endl;
            return false;
        }
    }




};


int main(){
    Stack str(5);
    str.push(15);
    str.push(18);
    str.push(22);
    str.push(25);
    cout<<str.peek()<<endl;
    
}

