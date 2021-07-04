#include<iostream>
#include<string>
using namespace std;

int main(){

    //declereation
    string str;

    string str2(5,'n'); // str2 = nnnnn

    //input
    cin>>str;

    getline(cin,str2); //to input strings with spaces in it
    cin.ignore();

    //output
    cout<<str; 

    //appending
    str.append(str2);

    cout<<str+str2;

    //slicing
    cout<<str2[2,5];

    //removing data from string object
    str.clear();

    

}