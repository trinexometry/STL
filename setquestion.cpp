/*Given N strings , print unique strings in lexographical order N<=10^5*/

#include<bits/stdc++.h>
using namespace std;

void print_set(set<string> &s){
    for(auto it: s){
        cout<<it<<endl;
    }
}

int main()
{   set<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);

    }cout<<endl;

    print_set(s);
    
    
    return 0;
}