#include<iostream>
using namespace std;

int main(){
    
    //creating the matrix
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }   
    cout<<endl;
    cout<<"enter the key"<<" ";
    int key; cin>>key;
    cout<<endl;

    bool flag = false;

    //searching the matrix linearly 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == key){
                cout<<"found at ("<<i+1<<","<<j+1<<")";
                flag = true;
                break;
            }
        }
    }

    if(flag == false){
        cout<<"not found";
    }
    

    return 0;
}