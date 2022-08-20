#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int > m;
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(1);
    v.push_back(5);
    v.push_back(1);
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }
    map<int,int>::iterator it;
    for(it =m.begin(); it!= m.end(); it++){
        cout<<it->second<<' ';
    }

}