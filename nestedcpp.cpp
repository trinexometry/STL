#include<bits/stdc++.h>
using namespace std;


//FIRST RULE OF NESTING -> keys and values are stored in sorted order 

int main()
{   map<pair<int,int>, int> m;
    pair<int,int> p1, p2;
    p1 = {1,2};
    p2 = {2,2};
    //p1 is less than p2 as the key is smaller in p1, the sorting algorithm first compares the keys then it compares the value then evaluates the sorted order
    



    map<set<int> , int> m2;
    //sets are compared by evaluating the first value of the set, if the corresponding first value is bigger for the first set then the first set is bigger hence the key of the map is sorted accordingly
    set<int> s1, s2;
    s1 = {1,2,4};
    s2 = {2,3};
    //in s2 first element is bigger than the corresponding first element of the s1 hence s1 is bigger 
    
    

    return 0;
}