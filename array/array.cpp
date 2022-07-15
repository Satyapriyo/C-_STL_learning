#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int , 4> a = { 1,2 ,4,5};
    for (int i = 0; i <a.size(); i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<"\n";
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
    cout<<a.at(2)<<endl;
}