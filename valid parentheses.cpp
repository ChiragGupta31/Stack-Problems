//Valid Parentheses

#include<bits/stdc++.h>
#include<string>
#include<stack>

bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;
    for(int i=0;i<expression.length();i++){
        char ch=expression[i];
        
        //for opening bracket
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        
        //for closing bracket
        else{
            if(!s.empty()){
                char top=s.top();
                if((ch==')' && top=='(')
                  ||(ch=='}' && top=='{')
                  ||(ch==']' && top=='[')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }    
      
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string str;
    cout<<"Enter a string"<<endl;
    cin>>str;
    cout<<"Valid Parentheses"<<isValidParenthesis(str)<<endl;

    return 0;
}