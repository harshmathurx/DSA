#include<iostream>
using namespace std;

int main(){

    int arr[] = {10,20,30};
    int *ptr = arr;
    cout<<*ptr<<endl;

    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    return 0;
}