#include<bits/stdc++.h>
using namespace std;

//#include<list>
//it works same as deque

int main()
{   
    list<int> l(4,100);
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(69);
    l.push_front(96);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());

    cout<<"after erasing"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    return 0;
}