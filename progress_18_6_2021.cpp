#include <iostream>
#include<climits>
using namespace std;

//Maximum sum subarray
int maximumSubSubarray(int arr[],int n){
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currSum = 0;
            for(int k=i;k<=j;k++){
                currSum += arr[k];
            }
            maxSum = max(currSum,maxSum);
        }
    }
     return maxSum;
}

//Cumulative Sum subarray
int cumulativeSumSubarray(int arr[],int n){
    int currSum[n+1];
    int maxSum = INT_MIN;
    currSum[0] = 0;
    for(int i=1;i<=n;i++){
        currSum[i] = currSum[i-1] + arr[i-1];
    }
    
    
    for(int i=1;i<=n;i++){
        int sum = 0;
        for(int j=0;j<i;j++){
            sum = currSum[i] - currSum[j];
            maxSum = max(sum,maxSum);
        }
    }
    
    return maxSum;
}

//Kadane's algorithm
int kadane(int arr[],int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    
    for(int i=0;i<n;i++){
        currSum += arr[i];
        
        if(currSum<0){
            currSum = 0;
        }
        
        maxSum = max(currSum,maxSum);
    }
    
    return maxSum;
}

int circularSumSubarray(int arr[],int n){
    int wrapsum=0,nonwrapsum=0,totalsum=0;
    
    nonwrapsum = kadane(arr,n);
    
    for(int i=0;i<n;i++){
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    
    wrapsum = totalsum + kadane(arr,n);
    
    return max(nonwrapsum,wrapsum);
}

int main()
{

    return 0;
}
