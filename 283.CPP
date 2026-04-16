#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,0,2,0,4,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);

vector<int> v;                     //vector to store non zeros
for (int i =0 ; i<n;i++){
    if (arr[i]!= 0){
        v.push_back (arr[i]);
    }
}
for (int i = 0 ; i<v.size();i++){    // put the non zeros back to the array (lastthreeindexwillbeasitis)
    arr[i]=v[i];
}

int nz = v.size();           // nz a int var that store the size of v that is 4
for(int i = nz ; i<n;i++){   // runs from fourth index in main arr till 7th index (lastthreeeindexwillbezero) 
    arr[i]=0;                  // put zero in the last three index of main arr
}
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}}