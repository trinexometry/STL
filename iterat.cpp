#include<bits/stdc++.h>
using namespace std;
int main()
{   //iterators are used to iterate through the containers which are not sequnetially stored like map and sets

    vector<int> v = {2,3,4,5,6};

    vector<int> ::iterator it = v.begin();
    // cout<< *(it + 1)<<endl;

    for ( it = v.begin(); it != v.end(); ++it)
    {
        cout<< *it << endl;
    }
    cout<<endl;
    // ++ vs +1
    //[2,3,4,5,6]
    // it++ -> moves to the next iterator
    // it+1 -> moves to the next location
    
    /*in vectors ++ and +1 works same as vectors are also allocated in contiguos memory
    but in case of maps and sets which are allocated in a distorted manner, we can't
    use +1 as it'll move the pointer to the next location but we want it to move to the next
    iterator*/
    
    //iterator for vector of pair
    vector<pair<int,int>> v_p = {{1,2}, {2,3}, {4,5}};
    vector<pair<int,int>> :: iterator it_p;
    for(it_p = v_p.begin(); it_p!= v_p.end(); ++it_p){
        cout<< (*it_p).first <<" "<< (*it_p).second<<endl;
    }
    cout<<endl;
    //NOTE: WHEN ITERATOR IS POINTING TO A PAIR WE CAN USE THIS
    //ARROW OPERATOR
    for(it_p = v_p.begin(); it_p!= v_p.end(); ++it_p){
        cout<< it_p->first <<" "<< it_p->second<<endl;
    }

    return 0;
}