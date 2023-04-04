#include<bits/stdc++.h>
using namespace std;

//store the first and the last of people then store their marks 


int main()
{   map<pair<string, string>, vector<int>> m;
    
    int n;
    cin>>n; //number of students
    for(int i = 0; i < n; i++){
        string fn, ln;
        int ct;
        cin >>fn>>ln>>ct;

        for (int j = 0; j < ct; j++)
        {   
            int marks;
            cin >> marks;
            m[{fn , ln}].push_back(marks); 
        }
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    for(auto &it: m){
        auto &full_name = it.first;
        auto &items = it.second;

        //printing the marks
        cout<<"first name: "<<full_name.first<<endl;
        cout<<"second name: "<<full_name.second<<endl;
        for(auto &len : items){
            cout<<len<<" ";
        }
    }

    return 0;
}