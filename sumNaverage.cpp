#include<iostream>
using namespace std;
int main(){
    int arr []={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = arr[0];
for(int i = 1 ; i<n ;i++){
    sum = sum + arr[i];
}
cout<<"Sum of the array elements is "<<sum<<endl;
cout<<"Average of the array elements is "<<(float)sum/n<<endl;
}