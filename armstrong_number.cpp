#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n; cin>>n;
    int check = n;
    int armstrong=0;
    while(n>0){
        int temp = n%10;
        armstrong += pow(temp,3);
        n=n/10;
    }

    if(armstrong == check){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not armstrong";
    }

    return 0;
}