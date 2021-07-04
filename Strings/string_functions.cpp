#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    //compare
    string s1 = "abc";
    string s2 = "xyz";

    if(s1.compare(s2)){
        cout<<"strings are equal";
    }

    cout<<s2.compare(s1)<<endl;

    //empty
    s1.empty();


    //erase
    string s3 = "nincompoop";
    s3.erase(3,3);

    //find
    string s4 = "nincompoop";
    cout<<s4.find("poo");


    //insertion
    s4.insert(2,"lol");

    //length
    cout<<s4.length()<<" "<<s4.size();

    //substring
    s4.substr(3,4);

    //string to integer
    string s1 = "786";
    int x = stoi(s1);

    //integer to string
    int n = 786;
    string integer = to_string(n);


    //sorting a string;
    //use the header file algorithm
    sort(s4.begin(),s4.end());
    return 0;
}