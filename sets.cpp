#include<bits/stdc++.h>
using namespace std;

//internal implementation of sets are also done with red black trees

void print(set<string> s){
    for(auto it: s){
        cout<<it<<endl;
    }
    cout<<endl;

    for(auto it = s.begin(); it!=s.end(); ++it){
        cout<<*it<<endl;
    }
}

void delete_set(set<string> &s){
    for(auto &it: s){
        s.erase(it);
    }
}

int main()
{   set<string> s;
    s.insert("caurav"); //log(n) for both insertion and accesing the element 
    s.insert("bumar");
    s.insert("aharma");

    //find function in stl returns an iterator(auto)
    auto it = s.find("caurav"); // time complexity O(log(n))
    //when using find in maps or sets always use them in a if block statement that checks whether it is pointing to end or it is a legit iterator
    if(it != s.end()){  //s.end() can take either the iterator or the exact value
        cout<<*it<<endl;
    }
    else
    {
        cout<<"value not found"<<endl;
    }
    print(s);
    printf("\n\n\n");
    
    delete_set(s); 
    print(s);

    return 0;
}