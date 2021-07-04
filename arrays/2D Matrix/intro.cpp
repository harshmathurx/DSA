#include<iostream>
using namespace std;

int main(){

    //decleration
    int a=10;
    int *aptr;
    aptr = &a;
    cout<<aptr<<endl; 

    //manipulation
    int b=20;
    int *bptr = &b;
    *bptr = 30;
    cout<<b<<endl;


    char c = 't';
    char *cptr = &c;
    cout<<cptr;

    return 0;
}