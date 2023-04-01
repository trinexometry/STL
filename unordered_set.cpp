//unordered sets are implementated by the help of hashing and is faster then ordered sets

#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

void print_um(unordered_set<string> s){
    for(auto it: s){
        cout<<it<<endl;
    }
}

int main()
{   unordered_set<string> um;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        um.insert(s); // time complexity = O(1)
    }
    
    print_um(um);

    return 0;
}