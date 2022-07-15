#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("hello ");
    s.push("world ");
    s.push("satya ");
    cout<<s.top();
    s.pop();
    cout<<s.top() << ' ';
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" "<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
}