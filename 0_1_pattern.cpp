#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            if((row+col) % 2 == 0){
                cout<<"0 ";
            }
            else{
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}