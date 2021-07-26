#include<iostream>
using namespace std;

int sum_recursive(int n){
    if(n==0){
        return 0;
    }
    return n+sum_recursive(n-1);
}

int main(){

    int n;
    cin>>n;
    cout<<sum_recursive(n);

    return 0;
}