#include<iostream>
using namespace std;
int main (){
    int arr[]={2,5,3,4,5,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target = 3;
    int index =  0;
    for(int i =0; i<n-1; i++){
        if (arr[i]== target){
            index = i;
        }
    }
    cout<<index;
}