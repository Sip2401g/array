#include <iostream>
using namespace std;
int main()
{

int arr[]={1,8,6,2,5,4,8,3,7};
int n = 9;
int maxarea = 0;
for(int i = 0 ; i <n; i++){
    for(int j = i+1 ; j<n; j++){
    int w = j-i;
    int h = min(arr[i],arr[j]);
    int area = w*h;
    maxarea= max(area,maxarea);
    }
}
cout<<maxarea<<endl;
}