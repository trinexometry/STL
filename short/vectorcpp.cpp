#include<bits/stdc++.h>
using namespace std;

int main()
{   
    vector<int> v;
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"size - > "<<v.size()<<endl;

    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"size - > "<<v.size()<<endl;
    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"size - > "<<v.size()<<endl;
    v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"size - > "<<v.size()<<endl;
    v.push_back(4);
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"size - > "<<v.size()<<endl;
    v.push_back(5);
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"size - > "<<v.size()<<endl;

    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"after popping"<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"clearing"<<endl;
    v.clear();
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}