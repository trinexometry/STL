#include<bits/stdc++.h>
using namespace std;

//LAST IN FIRST OUT DATA STRUCTURE

void print_Stack(stack<int> &s){
    while (s.empty() == false)
    {
        cout<<" ' "<<s.top()<<" ' "<<endl;
        s.pop();
    }
    
}

int main()
{   stack<int> s;
    s.push(10);
    s.push(134);
    s.push(1);

    cout<<"size: "<<s.size();
    cout<<endl;

    print_Stack(s);
    
    
    return 0;
}