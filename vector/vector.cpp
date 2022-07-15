#include<iostream>
#include<vector>//this is a dynamic array and when the array gets filled the size gets double of array then copy prvious one then dump previos one
using namespace std;
int main(){
    vector<int> a;
    vector<int> b(3,1);
    vector<int> bCopy =b;
    a.push_back(2);
    a.push_back(3);
    a.push_back(8);
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
    cout<<a.at(2)<<endl;
    cout<<"Max size -> "<< a.capacity() << endl;
    cout<<"size -> "<< a.size();
    a.pop_back();
    cout<<"after popping out"<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<"before clear size "<<a.capacity()<<endl;
    a.clear();
    cout<<"before clear size "<<a.capacity()<<endl;
// now for b
    for (int i = 0; i < b.size(); i++)
    {
        cout<<bCopy[i]<<" ";
    }
    cout<<'\n';
    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}