#include<iostream>
#include<climits>
using namespace std;

int smallestPositiveMissingInteger(int a[],int n){
    int N = 1e6+2;
    bool idx[N];
    for(int i=0;i<N;i++) idx[i] = false;

    for(int i=0;i<n;i++){
        if(a[i] >= 0){
            idx[a[i]] = true;
        }
    }

    for(int i=0;i<N;i++){
        if(idx[i] == false){
            return i;
        }
    }

    return -1;
}

int main(){

    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<smallestPositiveMissingInteger(arr,n);

    return 0;
}