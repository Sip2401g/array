// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int arr[]={1,2,3,6};
int n = sizeof(arr)/sizeof(arr[0]);
int largest =0;
int sec_largest = 0;
for (int i =0 ; i<n-1 ; i++){
if (arr[i]>largest){
    
    largest = arr[i];
    sec_largest =largest;
}
    else if( arr[i]>sec_largest && arr[i]!= max){
        sec_largest= arr[i]
}
cout<<sec_largest;
}
