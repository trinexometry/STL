#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0; i<n; ++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    sort(v.begin(), v.end());

    for(auto it: v){
        cout<< it << " ";
    }
    
    
    return 0;
}