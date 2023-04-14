#include<bits/stdc++.h>
using namespace std;

void print_map(map<int, string> &m){
    for(auto &pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;  //O(log(n))
    }
}

//implementation is done by the red-black balanced trees

int main()
{   map<int, string> m;
    m[5] = "gaurav";
    m[2] = "sushil";  //IMPORTANT: m[n]-> this operation takes O(log(n))
    m[1] = "gauri";
    pair<int,string> p = {10,"hehe"};
    m.insert(p);
    m.insert({3, "banga"}); //m.insert(pair)

    // map<int, string> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;ṇ
    // }cout<<endl;

    //The time complexity of log(n) also depends upon the type of map we are using 
    //ex: if we are using string then the net time complexity becomes = string.size() * log(n)

    auto it = m.find(9);   //find returns the iterator of the argument passed, if the argument is not found then find return the END iteretor
    if(it == m.end()){
        cout<< "NO VALUE"<<endl;
    } else{ 
    cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    cout<<endl;
    
    print_map(m); cout<<endl;
    
    m.erase(3); cout<<endl;
    auto it2 = m.end();
    it2--;
    cout<<(*it2).first<<endl;
    print_map(m); 


    m.clear();
    return 0;
}