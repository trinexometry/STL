#include<bits/stdc++.h>
using namespace std;

void max_print_prque(priority_queue<int> max){
    while (!max.empty())
    {
        cout<<max.top()<<endl;
        max.pop();
    }
    
}

void min_print_prque(priority_queue<int, vector<int>, greater<int>> min){
    while (!min.empty())
    {
        cout<<min.top()<<endl;
        min.pop();
    }
    
}

int main()
{   
    //maximum heap 
    priority_queue<int> maxi;

    maxi.push(10);
    maxi.push(20);
    maxi.push(30);
    

    //minimum heap
    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(1);
    mini.push(3);
    mini.push(5);

    max_print_prque(maxi);
    min_print_prque(mini);

    return 0;
}