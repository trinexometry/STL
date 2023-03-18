#include<bits/stdc++.h>
using namespace std;

//FIRST IN FIRST OUT

void print_queue(queue<string> q){
    while (q.empty() != true)
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
}

// gitisoahdguia
// seoigfjiojsf

int main()
{   
    queue<string> q;
    q.push("Gaurav");
    q.push("kumar");    
    q.push("sharma");

    print_queue(q);

    return 0;
}