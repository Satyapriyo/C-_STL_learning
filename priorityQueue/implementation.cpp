#include<bits/stdc++.h>
using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;//default max heap  && while fetching we will get maximum elment
    //min heap
    priority_queue<int , vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(1);
    maxi.push(5);
    maxi.push(4);
    maxi.push(3);
    cout<<maxi.size()<<endl;
    // now printing the element of max heap
    int n = maxi.size();
    for (int i = 0; i <n ; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    if (mini.empty())
    {
        cout<<endl<<"khali dal dia yarr";
    }
    
    return 0;
}