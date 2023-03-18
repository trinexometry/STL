#include <iostream>
#include <array>
using namespace std;

int main(){
    //int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};
    
    if(a.empty() == true){
        cout<<"array empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }

    cout<<"front: "<<a.front() <<" "<<a[0]<<endl;;
    cout<<"back: "<<a.back() <<" "<<a[a.size() - 1];
}