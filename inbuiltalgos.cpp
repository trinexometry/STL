#include<bits/stdc++.h>
using namespace std;

int main()
{   int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    //minimum element
    auto min = min_element(v.begin(), v.end());
    cout<<"min element: "<<*min<<endl;

    //maximum element 
    auto max = max_element(v.begin(), v.end());
    cout<<"max element: "<<*max<<endl;
    
    //vector sum
    auto sum = accumulate(v.begin(), v.end(),0);
    cout<<"vector sum: "<<sum<<endl; 
    
    //count frequency
    auto cnt = count(v.begin(), v.end(), 3);
    cout<<"count: "<<cnt<<endl;
    
    //reverse a string or an array
    vector<int> v2;
    auto it = v2;
    reverse_copy(v.begin(), v.end(), it);
    cout<<"reverse string: ";
    for(auto it: v2){
        cout<<it<<" ";
    }
    return 0;
}