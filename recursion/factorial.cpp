#include<iostream>
using namespace std;
int fact_recursive(int n){

    if(n==0){
        return 1;
    }
    int prevFactorial = fact_recursive(n-1);
    return n*prevFactorial;
}


int main(){

    int n; cin>>n;
    cout<<fact_recursive(n);

    return 0;
}