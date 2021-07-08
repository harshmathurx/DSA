#include<iostream>
using namespace std;

void sort012(int arr[],int n){
    int l=0,m=0,h=n-1;

    while(m<=h){
        if(arr[m] == 0){
            int temp = arr[m];
            arr[m] = arr[l];
            arr[l] = temp;
            m++;
            l++;
        }

        if(arr[m] == 1){
            m++;
        }

        if(arr[m] == 2){
            int temp = arr[h];
            arr[h] = arr[m];
            arr[m] = temp;
            h--;
        }
    }
}

int main(){

    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort012(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}