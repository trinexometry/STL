#include<bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int,int>> &v){
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i].first << " "<< v[i].second << endl;
    }
    
}

int main()
{   
    //vector of pairs
    vector<pair<int,int>> v = {{1,2}, {2,3}, {3,4}};
    
    printVector(v);

    return 0;
}