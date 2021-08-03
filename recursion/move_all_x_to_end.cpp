#include<iostream>
using namespace std;

string move_x(string s){
    if(s.length()==0){
        return "";
    }

    char ch = s[0];
    string ans = move_x(s.substr(1));
    if(ch == 'x'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){

    cout<<move_x("axxxbdsdbxabsdhbxbhxsad");
    return 0;
}