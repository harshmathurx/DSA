#include<iostream>
#include<algorithm>
using namespace std;

int kthLargestElement(int arr[],int s,int e,int k){
    sort(arr,(arr+e+1));
    return arr[k-1];
}

int main(){

    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k; cin>>k;
    cout<<kthLargestElement(arr,0,n,k);

    return 0;
}