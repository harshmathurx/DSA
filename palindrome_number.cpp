#include<iostream>
using namespace std;

int main(){

    int n; cin>>n;
    int check = n;
    int rev = 0;
    while(n>0){
        int temp = n%10;
        rev = rev*10 + temp;
        n=n/10;
    }

    if(rev == check){
        cout<<"Palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;
}