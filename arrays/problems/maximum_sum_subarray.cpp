#include<iostream>
#include<climits>
using namespace std;

//BruteForce
// int maximumSumSubarray(int arr[],int n){
//     int maxSum = INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum = 0;
//             for(int k=i;k<=j;k++){
//                 sum += arr[k];
//             }
//             maxSum = max(sum,maxSum);
//         }
//     }
//     return maxSum;
// }

//Cumulitive sum approach
int maximumSumSubarray(int arr[],int n){
    int currSum[n+1];
    currSum[0] = 0;
    for(int i=1;i<=n;i++){
        currSum[i] = currSum[i-1] + arr[i-1];
    }

    int maxSum = 0;
    for(int i=1;i<=n;i++){
        int sum = INT_MIN;
        for(int j=0;j<i;i++){
            sum = currSum[i] - currSum[j];
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