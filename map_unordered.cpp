#include<bits/stdc++.h>
using namespace std;
int main()
{   //implemented by the hash table
    //unordered map cannot handle complex datatypes like pairs and vectors as there are no implicit hash tables for them
    unordered_map<int, string> m;
    m[1] = "gaurav";
    m[2] = "sushil"; //time complexity of this operation is O(1)
    m[3] = "kumar";

    for(auto it: m){
        cout<<it.first <<" "<<it.second<<endl;
    }

    auto it2 = m.find(3); //time complexity -> o(1)
    cout<<it2->first<<it2->second<<endl;
    return 0;
}