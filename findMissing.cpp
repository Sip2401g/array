#include<iostream>
using namespace std;
int main(){ 
int arr[]= {1,2,4,5,6};
int n=6; // size of array is 5 but n is 6 because we are considering the missing number as well 
int sum = 0;
for(int i=0; i<n-1 ;i++){
    sum+=arr[i];
}
int totalsum = n*(n+1)/2;
cout<<totalsum-sum;
}
