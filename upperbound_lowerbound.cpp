#include<bits/stdc++.h>
using namespace std;

//these functions only works with sorted arrays or vectors
int main()
{   int n;
    cin >> n;
    int arr[n];
    vector<int> v;
    // for(int i = 0; i<n ; ++i){
    //     cin>>arr[i];
    // }
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // sort(arr, arr+n);
    // int *lowerbound = lower_bound(arr, arr+n , 5);
    // int *upperbound = upper_bound(arr, arr+n , 4);
    // sort(v.begin(), v.end());
    // auto lowerbound = lower_bound(v.begin(), v.end() , 26); //time complexity -> O(log(n))
    // auto upperbound = upper_bound(v.begin(), v.end(), 26);
    // // if(upperbound == v.end() || lowerbound ==v.end()){
    // //     cout<<"NA";
    // //     return 0;
    // // }
    // cout<<"lowerbound: "<<*lowerbound<<" "<<"upperbound: "<<*upperbound;
    
    //usecase -> special case to take care of, is when we are using this in sets or maps then if we do it like this
    set<int> s;
    for(int i = 0; i<n; i++){
        s.insert(rand());
    }

    auto it_set = upper_bound(s.begin(), s.end(), rand()); //HERE the time complexity will be O(N) and not O(log(n))

    //to make it O(log(n)), we have to rewrite this statement like this
    it_set = s.upper_bound(rand());
    cout<<*it_set;

    return 0;
}