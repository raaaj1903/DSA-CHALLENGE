#include<iostream>
using namespace std;
int main(){
    int n ,target;
    cout<<"Enter Size Of Araay:";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter Target Sum";
    cin >> target;

    int left=0; int right = n-1;

    while(left < right){
        int sum =arr[left]+arr[right];
        if(sum==target){
            cout<<"Pair Founded"<<arr[left]<<arr[right];
            return 0;
        }

        else if(sum < target) {
        left++; 
        }

         else {
           right--;
          }
    }
      cout << "No pair found";
}