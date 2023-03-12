#include<bits/stdc++.h>
using namespace std;

void print_p(pair<int, string> p){
    cout<<p.first<<" "<<p.second<<endl;
}

int main()
{   pair<int, string> p;
    p = make_pair(2,"hey"); // or p = {2,"hey"};
    print_p(p);

    pair<int,string> p1 = p; //COPY BY VALUE
    p1.first = 3;
    print_p(p1);
    print_p(p);
    
    pair<int,string> &p2=p; //COPY BY REFERENCE
    print_p(p2);
    print_p(p);

    //ARRAY OF PAIRS
    int a[] = {1,2,3};
    int b[] = {2,3,4};

    

    pair<int,int> p_ar[3];
    p_ar[0] = {1,2};
    p_ar[1] = {2,3};
    p_ar[2] = {3,4};

    for (int i = 0; i < 3; i++)
    {
       cout<<p_ar[i].first<<" "<<p_ar[i].second<<endl;
    }
    cout<<endl;
    cout<<endl;
    swap(p_ar[0], p_ar[2]);
    for (int i = 0; i < 3; i++)
    {
        cout<<p_ar[i].first<<" "<<p_ar[i].second<<endl;
    }
       
    
    return 0;
}