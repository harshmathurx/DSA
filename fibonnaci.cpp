#include<iostream>
using namespace std;

int main(){

    int n; cin>>n;
    int t1 = 0, t2=1;
    int nextTerm = t1+t2;
    cout<<t1<<" "<<t2<<" ";
    for(int i=1;i<=10;i++){
        cout<<nextTerm<<" ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}