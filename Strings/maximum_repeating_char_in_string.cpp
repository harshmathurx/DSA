#include<iostream>
#include<string>

using namespace std;

int main(){

    string s = "dsjnbvjhbfkjdbfidf";

    int freq[26];
    
    for(int i=0;i<26;i++){
        freq[i] = 0;
    }

    for(int i=0;i<s.size();i++){
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int max_freq;

    for(int i=0;i<26;i++){
        if(max_freq < freq[i]){
            max_freq = freq[i];
            ans = i+'a';
        }
    }

    cout<<ans<<" "<<max_freq<<endl;

    return 0;
}