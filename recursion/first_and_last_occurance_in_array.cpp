#include<iostream>
using namespace std;

int firstOccurance(int arr[],int n, int i,int k){
    if(i==n){
        return -1;
    }

    if(arr[i] == k){
        return i;
    }
    
    return firstOccurance(arr,n,i+1,k);
}

int lastOccurance(int arr[],int n,int i,int k){
    if(i==n){
        return -1;
    }
    int restArray = lastOccurance(arr,n,i+1,k);
    if(restArray!=-1){
        return restArray;
    }
    
    if(arr[i] == k){
        return i;
    }

    return -1;
}

int main(){


    return 0;
}