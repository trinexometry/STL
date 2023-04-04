#include<bits/stdc++.h>
//#include <deque>


using namespace std;
int main()
{   
    //DOUBLY ENDED QUE
    // they are not continuesly allocated in memory, they are a combination of many fixed static array
    
    deque<int> q;

    q.push_back(1);
    q.push_back(3);
    q.push_back(4);
    q.push_front(2);
    q.push_front(5);
    q.push_front(6);
    
    for(int i:q){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"popping front"<<endl;
    q.pop_front();
    for(int i:q){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"popping back"<<endl;
    q.pop_front();
    for(int i:q){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"first index element: "<<q[1]<<" "<<q.front()<<endl;
    
    //ERASING ELEMENT
    q.erase(q.begin(), q.begin()+1);
    cout<<"after erasing deque"<<endl;
    for(int i:q){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}