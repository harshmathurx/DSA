#include<iostream>
#include<climits>
using namespace std;

int maximum_circular_sum_subarray(int arr[],int n){
    int wrap_sum,non_wrap_sum;
    non_wrap_sum = kadane(arr,n);

    int total_sum = 0;

    for(int i=0;i<n;i++){
        total_sum += arr[i];
        arr[i] = -arr[i];
    }

    wrap_sum = total_sum + kadane(arr,n);

    return max(wrap_sum,non_wrap_sum);
}

int kadane(int arr[],int n){
    int currsum = 0,maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currsum += arr[i];
        if(currsum < 0){
            currsum = 0;
        }
        maxSum = max(currsum,maxSum);
    }

    return maxSum;
}  

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    return 0;
}