#include<bits/stdc++.h>
using namespace std;

//COMPARATOR FUNCTION 

bool should_i_swap(int a, int b){
    if(a > b) return true; //sorting in ascending order
    return false;

    /* sorting in descending order
    if(a<b) return true;
    return false;
    */
}

//if we want to sort pairs like, first digit should be sorted in ascending order, and if same value occurs then the second value should be sorted in descending order
bool should_i_swap(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        if(a.first>b.first ) return true;
        return false;
    }
    else{
        if(a.second < b.second) return true;
        return false;
    }
}


int main()
{   
    vector<int> v1 = {1,20,-10,-1, 2};
    vector<pair<int, int>> v2 = {{1,2}, {3,8}, {3, 10}, {2,40}, {10, 20}};
    
    for(int i = 0; i < v1.size(); i++){
        for(int j = i+1; j<v1.size(); j++){
            if(should_i_swap(v1[i], v1[j])){
                swap(v1[i], v1[j]);
            }
        }
    }

    cout<<"SORTED VECTOR"<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }  


    for(int i = 0 ; i<v2.size(); i++){
        for(int j = i+1; j<v2.size(); j++){
            if(should_i_swap(v2[i], v2[j])){
                swap(v2[i], v2[j]);
            }
        }
    }
    cout<<"SORTED VECTOR OF PAIRS"<<endl;

    for(auto it : v2){
        cout<< it.first <<" "<<it.second<<endl;
    }
    

    return 0;
}