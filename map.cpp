#include<bits/stdc++.h>
using namespace std;

void print_map(map<int, string> &m){
    for(auto &pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;  //O(log(n))
    }
}

int main()
{   map<int, string> m;
    m[5] = "gaurav";
    m[2] = "sushil";  //IMPORTANT: m[n]-> this operation takes O(log(n))
    m[1] = "gauri";
    m.insert({3, "banga"});

    // map<int, string> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }cout<<endl;

    print_map(m);
    


    return 0;
}