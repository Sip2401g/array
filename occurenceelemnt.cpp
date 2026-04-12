#include<iostream>
using namespace std;

int main(){
    int arr[]={2,5,34,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    int target;

    cout<<"Enter element to search: ";
    cin>>target;

    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            count++;
        }
    }

    if(count == 0){
        cout<<"Element not found"<<endl;
    } else {
        cout<<"Element "<<target<<" occurs "<<count<<" times"<<endl;
    }
}