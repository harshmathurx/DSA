#include<iostream>
#include<climits>
using namespace std;

int maximumSumSubarray(int arr[],int n){
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
            }
            maxSum = max(sum,maxSum);
        }
    }
    return maxSum;
}

int main(){

    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<maximumSumSubarray(arr,n);

    return 0;
}