#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,1,2,4,6,2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
 for (int i =0; i<n; i++){
    int count = 0;
        for(int j =0; j<n; j++){
            if(arr[i]==arr[j]){
                    count ++;
                        }
    }
        if(count == 1){
            cout<<arr[i];
}}
     return -1;
 }
