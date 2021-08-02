#include<iostream>
#include<String>
using namespace std;
void reverse(string s){
    string ans = "";
    if(s.length()==0){
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main(){

    reverse("github");
    return 0;
}