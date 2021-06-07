#include<iostream>
#include<climits>
using namespace std;

int smallestRepeatingElement(int a[],int n){
    int N = 1e6+2;
    int idx[N];
    int minidx = INT_MAX;
    for(int i=0;i<N;i++) idx[i] = -1;

    for(int i=0;i<n;i++){
        if(idx[a[i]] != -1){
            minidx = min(minidx,idx[a[i]]);
        }else{
            idx[a[i]] = i;
        }
    }

    if(minidx == INT_MAX){
        return -1;
    }
    else{
        return minidx;
    }

}

int main(){

    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<smallestRepeatingElement(a,n);

    return 0;
}