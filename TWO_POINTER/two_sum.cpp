#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n ,target;
    cout<<"Enter Size Of Array:";
    cin>>n;
    
    int arr[n];
    cout<<"Enetr Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter Target Sum";
    cin >> target;


    unordered_map<int ,int>mp;

    for(int i=0;i<n;i++){
        int diff = target - arr[i];
        if(mp.find(diff)!=mp.end()){
            cout<<"Pair found:"<< diff << "end" <<arr[i];
            return 0;
        }

        mp[arr[i]]=i;

    }

    cout<<"NO PAIR FOUND";
    return 0;

}