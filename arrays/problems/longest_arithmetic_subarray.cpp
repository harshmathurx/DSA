#include<iostream>
using namespace std;

int longestArithmeticSubarray(int a[], int n){
    int pd = a[1] - a[0];
    int ans = 2;
    int curr = 2;
    int j = 2;
    while(j<n){
        if(pd == a[j] - a[j-1]){
            curr++;
        }
        else{
            pd = a[j] - a[j-1];
        }
        ans = max(ans,curr);
        j++;
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<longestArithmeticSubarray(arr, n);

    return 0;
}