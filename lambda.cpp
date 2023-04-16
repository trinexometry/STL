 #include<bits/stdc++.h>
 using namespace std;


bool is_negative(int x){
    return x<0;
}

 int main()
{   //lambda function
    auto sum = [](int x , int y){return x+y;};
    //cout<<sum(2,3)<<endl;

    //some algorithm we'll use with lambda functions
    vector<int> v = {1,2,-13,4};
    //all_of function -> check if the condition is true for each value of vector or array
    cout<<all_of(v.begin(), v.end(), [](int x){return x>0;})<<endl;

    //we can also use a fucntion that's declared abrstractly
    cout<<all_of(v.begin(), v.end(), is_negative)<<endl;

    //any_of -> if any of the elements satisfies the condition
    cout<<any_of(v.begin(), v.end(), is_negative)<<endl;

    //none_of -> of none of the element satisfies the condition 
    cout<<none_of(v.begin(), v.end(), is_negative)<<endl;

    return 0;
 }