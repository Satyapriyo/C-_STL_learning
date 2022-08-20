#include<bits/stdc++.h>
using namespace std;
int main(){
    //only unique element in set
    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(7);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    set<int>:: iterator it;
    cout<<"after deleting"<<endl;
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    it=s.find(7);
    cout<<endl;
    cout<<*it;
    return 0;
}