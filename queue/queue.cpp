#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> s;
    s.push("hello ");
    s.push("world ");
    s.push("satya ");
    cout<<s.front();
    s.pop();
    cout<<s.front() << ' ';
    s.pop();
    cout<<s.front()<<" ";
    s.pop();
    cout<<s.front()<<" "<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
}