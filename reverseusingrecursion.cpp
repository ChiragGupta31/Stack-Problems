//Reverse a Stack using recursion

#include<bits/stdc++.h>


void insertatBottom(stack<int> &s, int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    
    int num=s.top();
    s.pop();
    
    insertatBottom(s,element);
    
    s.push(num);
    
    
}


void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return;
    }
    
    
    int num=stack.top();
    stack.pop();
    
    //recursive call
    
    reverseStack(stack);
    //inserting at bottom to reverse
    insertatBottom(stack,num);
    
    
}