/*Given N strings, and Q queries. In each query you are given a string print yes if the string is present no if not*/

#include<bits/stdc++.h>
using namespace std;
int main()
{   unordered_set<string> us;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        us.insert(s);
    }

    int Q;
    cin>>Q;
    // for (int i = 0; i < Q; i++)
    // {
    //     string s;
    //     cin >> s;
    //     auto it = us.find(s);
    //     if(it != us.end()){
    //         cout<<s<<" "<<"yes"<<endl;
    //     }
    //     else{
    //         cout<<s<<" "<<"no"<<endl;
    //     }
    // }
    
    while(Q--){
        string str;
        cin>>str;
        if(us.find(str) == us.end()){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
    
    return 0;
}