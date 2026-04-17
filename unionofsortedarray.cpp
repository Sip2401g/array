#include<iostream>
#include<set>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int arr2[]={3,4,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int m= sizeof(arr2)/sizeof(arr2[0]);
    set<int>s;
    for(int i =0 ; i<n;i++){
        s.insert(arr[i]); // in maps we use s[arr[i]]++; but in sets we use s.insert(arr[i]) because set is a collection of unique elements and it does not allow duplicate values. When we insert an element into a set, it checks if the element already exists in the set. If it does, the insertion is ignored, and the set remains unchanged. If the element does not exist in the set, it is added to the set. This behavior ensures that all elements in a set are unique, and it allows us to easily find the union of two arrays by simply inserting all elements from both arrays into the set.
    }
    for(int i =0 ; i<m;i++){
        s.insert(arr2[i]); // in maps we use s[arr2[i]]++; but in sets we use s.insert(arr2[i]) because set is a collection of unique elements and it does not allow duplicate values. When we insert an element into a set, it checks if the element already exists in the set. If it does, the insertion is ignored, and the set remains unchanged. If the element does not exist in the set, it is added to the set. This behavior ensures that all elements in a set are unique, and it allows us to easily find the union of two arrays by simply inserting all elements from both arrays into the set.
    }
    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" "; //similary we can solve this with it->first
    }
    
}