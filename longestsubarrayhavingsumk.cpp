#include<iostream>
using namespace std;
int main(){
    int nums[] = {1, -1, 5, -2, 3};
    int k = 3;
    int maxLen = 0;
        for(int i = 0; i<5; i++){
            int sum = 0;
            for (int j =i; j<5; j++){
                sum += nums[j];
                if (sum == k){
                    maxLen = max(maxLen,j-i+1);
                }
            }
        }
        cout<<maxLen;
    }