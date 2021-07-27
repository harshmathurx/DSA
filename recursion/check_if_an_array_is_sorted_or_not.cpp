#include<iostream>
using namespace std;

bool sorted(int arr[],int n){

    if(n==1){
        return true;
    }
    

    bool restArray = sorted(arr+1,n-1); 
    if(arr[0] < arr[1] && restArray==true){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool result = sorted(arr,n);
    if(result){
        cout<<"The array is sorted";
    }
    else{
        cout<<"The array is not sorted";
    }

    return 0;
}