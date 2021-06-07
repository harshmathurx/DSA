#include<iostream>
using namespace std;

void subarrayWithGivenSum(int arr[],int n,int key){
    int i=0,j=0,st=-1,en=-1,sum=0;
    
    while(j<n && sum+arr[j] <= key){
        sum+=arr[j];
        j++;
    }

    if(sum == key){
        cout<<i+1<<" "<<j<<endl;
        return;
    }
       
    while(j<n){
        sum += arr[j];
        while(sum>key){
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

int main(){

    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;
    cin>>key;

    subarrayWithGivenSum(arr,n,key);

    return 0;    
}