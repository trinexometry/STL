#include<bits/stdc++.h>
using namespace std;

void printVectorPair(vector<pair<int,int>> &v){
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i].first << " "<< v[i].second << endl;
    }
    
}

void printVec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{   
    //vector of pairs
    vector<pair<int,int>> v = {{1,2}, {2,3}, {3,4}};
    printVectorPair(v);

    //array of vectors
    int N;
    cout<<"enter the number of vectors: ";
    cin>>N;
    vector<int> v1[N];
    for(int i = 0; i < N ; i++){
        int n;
        cout<<"enter the number of values: ";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout<<"Enter element: ";
            cin>>x;
            v1[i].push_back(x);
        }

          
    }
    for (int i = 0; i < N; i++)
    {
        printVec(v1[i]);
    }


    //vector of vector
    int M;
    cout<<"ENTER THE SIZE OF VECTOR: ";
    cin>>M;
    vector<vector<int>> vec;
    
    for(int i = 0; i<M; i++){
        int n;
        cout<<"how many values: ";
        cin>>n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout<<"enter the element : ";
            cin>>x;
            temp.push_back(x);
        }
        vec.push_back(temp);
        
    }

    for(int i = 0; i <3; i++){
        printVec(vec[i]);
    }

    return 0;
}