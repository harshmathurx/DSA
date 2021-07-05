#include<iostream>
#include<string>
using namespace std;


int main(){

    string str = "ldnfkjdbfhadbfksf";
    string str1 = "JSBFRKBFSJKDFBGIU";

    //converting into upper
    for(int i=0;i<str.length();i++){
        if(str[i] >= 'a' && str[i]<='z'){
            str[i] -= 32;
        }
    }

    //coverting to lower
    for(int i=0;i<str1.length();i++){
        if(str1[i] >= 'A' && str1[i]<='Z'){
            str1[i] += 32;
        }
    }

    cout<<str<<endl<<str1;

    return 0;
}
