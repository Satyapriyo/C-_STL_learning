#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int> n(5,100);
    l.push_back(1);
    l.push_front(3);
    cout<<"before erasing\n";
    for(int i : l)
    {
        cout<<i<<" ";
    }

    l.erase(l.begin());
    cout<<"\nafter erasing "<<endl;
    for(int i : n)
    {
        cout<<i<<" ";
    }
    int size = l.size();
    cout<<endl<<size<<" this is size of list";
}