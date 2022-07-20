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
    
    cout<<"after deleting"<<endl;
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    return 0;
}