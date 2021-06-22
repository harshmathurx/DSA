#include<iostream>
using namespace std;

int main(){

    int t1,t2,t3;
    cin>>t1>>t2>>t3;
    int A[t1][t2], B[t2][t3];

    for(int i=0;i<t1;i++){
        for(int j=0;j<t2;j++){
            cin>>A[i][j];
        }
    }

    for(int i=0;i<t2;i++){
        for(int j=0;j<t3;j++){
            cin>>B[i][j];
        }
    }

    int ans[t1][t3];
    for(int i=0;i<t1;i++){
        for(int j=0;j<t3;j++){
            ans[i][j] = 0;
        }
    }

    //matrix multiplication
    for(int i=0;i<t1;i++){
        for(int j=0;j<t3;j++){
            for(int k=0;k<t2;k++){
                ans[i][j] += A[i][j] * B[k][j]; 
            }
        }
    }

     
    return 0;
}