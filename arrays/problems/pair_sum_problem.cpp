#include<iostream>
#include<climits>
using namespace std;

// //brute force
// bool pairSum(int arr[],int l,int key){
//     for(int i=0;i<l-1;i++){
//         for(int j=i+1;j<l;j++){
//             if(arr[i] + arr[j] == key){ 
//                 cout<<"found at "<<i<<" and "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// } 

bool pairSum(int arr[],int l,int key){
    //sort the array first
    int st = 0;
    int en = l-1;

    while(st<en){
        int sum = arr[st] + arr[en];
        if(sum == key){
            cout<<st+1<<" "<<en+1;
            return true;
        }
        else if(sum > key){
            en--;
        }
        else{
            st++;
        }
    }

    return false;
}

int main(){


    return 0;
}