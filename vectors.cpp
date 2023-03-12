#include<bits/stdc++.h>
using namespace std;
 
void print_vector(vector<int> v){  //(v here is passed by value that means a different copy is made, to pass it by reference use &v)
    cout<<"vector size: "<<v.size()<<endl;
    for (int i = 0; i < v.size() /*O(1)*/; i++)
    {   
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{   int a[10]; //ARRRAYS ARE MAINLY STATIC

    vector<int> v; //vectors are DYNAMIC 
    // you can declare size by vector<int> a(no. of values, value) --> (10, 5) 10 no. of values in vector of  value 5
    vector<int> v1(5,10);
    print_vector(v1);
    cout<<endl;
    v1.pop_back(); //removes the last element
    print_vector(v1);  

    cout<<endl;

    cout<<"enter the size of the vector: "<<endl;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout<<"enter "<<i<<"th element: ";
        cin>>x;
        print_vector(v);
        v.push_back(x); //O(1)
    }
    print_vector(v);

    cout<<endl;
    //copying vectors
    vector<int> v2 = v; //copy by value  O(n)
    v2.push_back(69);
    print_vector(v2); //PASS BY VALUE
    cout<<endl; 
    print_vector(v); //PASS BY VALUE

    cout<<endl;
    vector<int> &v3 = v1;
    v3.push_back(60);
    print_vector(v3);
    cout<<endl;
    print_vector(v1);

    return 0;
}