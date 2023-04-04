#include<bits/stdc++.h>
using namespace std;

//multisets are used when we want to allow duplicates

void print_mls(multiset<string> &mls){
    for(auto it: mls){
        cout<<it<<endl;
    }
}

//multisets are also implemented by the red black trees hence 


//this will delete all the entries of the particular string
void delete_element(multiset<string> &mls, string s){
    auto it = mls.find(s);
    if (it == mls.end())
    {
        cout<<"not found"<<endl;
    }
    else
    {
        mls.erase(s);
    }
}

//but if we use iterator to delete the element only one copy of the element will be deleted remaining will stay intact
void delete_by_iterator(multiset<string> &mls, string s){
    auto it = mls.find(s);
    if (it == mls.end())
    {
        cout<<"not found"<<endl;
    }
    else
    {
        mls.erase(it);
    }
}

//erase is an O(1) operation when we provide an iterator to it but is, O(Log(n)) when we pass value into it


int main()
{   multiset<string> mls;
    mls.insert("hehe");
    mls.insert("hehe");
    mls.insert("abc"); 
    mls.insert("hehe"); 

    print_mls(mls);
    cout<<endl;
    delete_element(mls, "abc");  
    print_mls(mls);
    cout<<endl;
    delete_by_iterator(mls,"hehe");
    print_mls(mls);
    cout<<endl;

    cout<<mls.max_size();

    return 0;
}