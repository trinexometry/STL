//the inbuilt introsort function provides the functionality to add another argument to it as a comparater function 
//the comparater function has one special this that the function that you'll pass needs to return false(if you want to swap) and true(if you don't want to swap)
//basically return in the opposite manner of what you did in comparatercustom.cpp (should_i_swap function)
//tip: don't hassle about remembering to return true of false in the comparater function
//just return the condition you want

#include<bits/stdc++.h>
using namespace std;

//COMPARATOR FUNCTION 
//if we want to sort pairs like, first digit should be sorted in ascending order, and if same value occurs then the second value should be sorted in descending order
bool should_i_swap(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        return a.first<b.first; //a is bigger than b (pervious bigger then next -> descending)
    } 
    else{
       return a.second > b.second;  //a is smaller than b (pervious smaller then next -> ascending)
}
}

int main()
{   
    vector<pair<int, int>> v2 = {{1,2}, {3,8}, {3, 10}, {2,40}, {10, 20}};


    sort(v2.begin(), v2.end(), should_i_swap);

    cout<<"SORTED VECTOR OF PAIRS"<<endl;

    for(auto it : v2){
        cout<< it.first <<" "<<it.second<<endl;
    }
    

    return 0;
}