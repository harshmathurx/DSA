#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s=0,e=n;
    while(s<e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int main() {
    
    int n; cin>>n;
    int marks[n], age[n];
    cout<<endl;
    cout<<"Enter the marks";
    for(int i=0;i<n;i++) cin>>marks[i];
    cout<<endl;
    
    cout<<"Enter the ages";
    for(int i=0;i<n;i++) cin>>age[i];
    
    //Selection sort
    for(int i=0;i<n-1;i++){
        for(int j=i+1;i<n;i++){
            if(marks[i] > marks[j]){
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
    
    //Bubble sort 
    int counter = 1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(age[i] > age[i+1]){
                int temp = age[i];
                age[i] = age[i+1];
                age[i+1] = temp;
            }
        }
        counter++;
    }
    
    for(int i=0;i<n;i++) cout<<marks[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++) cout<<age[i]<<" ";
    cout<<endl;
    
    int key;
    cout<<"Enter the number to find ";
    cin>>key;
    cout<<endl;
    
    int result = binarySearch(age,n,key);
    if(result == -1){
        cout<<"Not found";
    }
    else{
        cout<<"found at "<<result;
    }
    
    return 0;
}
