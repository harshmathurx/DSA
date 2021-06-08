#include <iostream>
#include<climits>
#include<cmath>
using namespace std;

void maxTill(int arr,int n){
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        mx = max(arr[i],mx);
        cout<<mx<<endl;
    }
}

void sumOfAllSubarrays(int arr[],int n){
    int curr = 0;
    for(int i=0;i<n;i++){
        curr = 0;
        for(int j=i;j<n;j++){
            curr += arr[j];
            cout<<curr<<endl;
        }
    }
}

int longestArithmeticSubarray(int a[],int n){
    int pd = a[1] - a[0];
    int curr = 2;
    int ans = 2;
    int i=2;
    while(i<n){
        if(pd == a[i] - a[i-1]){
            curr++;
        }
        else{
            pd = a[i] - a[i-1];
            curr = 2;
        }
        ans = max(curr,ans);
        i++;
    }
    
}

int recordBreakingDays(int a[],int n){
    int days = 0;
    int mx = -1;
    int j=0;
    if(n == 1){
        return 1;
    }
    for(int i=0;i<n;i++){
        if(a[j]>mx && a[j]>a[j+1]){
            days++;
        }
        mx = max(mx,a[j]);
    }
}

int firstRepeatingElement(int arr[],int n){
    int N = 1e6+2;
    int idx[N];
    int minidx = INT_MAX;
    for(int i=0;i<N;i++) idx[i] = -1;
    
    for(int i=0;i<n;i++){
        if(idx[arr[i]] != -1){
            minidx = min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }
    
    if(minidx == INT_MAX){
        return -1;
    }
    else{
        return minidx;
    }
}

void SubarrayWithGivenSum(int arr[],int n,int key){
    int i=0,j=0,st=-1,en=-1,sum=0;
    while(j<n && arr[j]+sum<key){
        sum += arr[j];
        j++;
    }
    
    if(sum == key){
        cout<<i+1<<" "<<j<<endl;
        return;
    }
    
    while(j<n){
        sum += arr[j];
        while(sum> key){
            sum -= arr[i];
            i++;
        }
        if(sum == key){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    
    cout<<st<<" "<<en<<endl;
}

int smallestPositiveMissingNumber(int arr[],int n){
    int N = 1e6+2;
    bool idx[N];
    for(int i=0;i<N;i++) idx[i] = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            idx[arr[i]] = true;
        }
    }
    int ans = -1;
    for(int i=0;i<N;i++){
        if(idx[i] == false){
            return i;
        }
    }
}


int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    return 0;
}


