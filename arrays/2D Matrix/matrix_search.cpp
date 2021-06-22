#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[n][m];
        }
    }

    int key; cin>>key;
    bool flag = false;
    int r=0,c=m-1;
    while(r<n && c>=0){
        if(arr[r][c] == key){
            flag = true;
            cout<<r+1<<" "<<c+1;
            break;
        }
        else if(arr[r][c] > key){
            c--;
        }
        else{
            r++;
        }
    }

    if(flag == true){
        cout<<" found";
    }
    else{
        cout<<"not found";
    }

    return 0;
}