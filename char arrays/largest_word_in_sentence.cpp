#include<iostream>
using namespace std;

int main(){

    int n;
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int max_count = 0;
    int i=0,curr_length=0;
    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(curr_length > max_count){
                max_count = curr_length;
            }
            curr_length = 0;
        }
        else{
            curr_length++;
        }
        
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }

    cout<<max_count;

    return 0;
}