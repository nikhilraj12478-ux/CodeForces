#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len = s.length();
    int uppercase = 0;
    for(int i = 0; i < len; i++){
        if(s[i] >= 65 && s[i] <= 90){
            uppercase++;
        }
    }
    int lowercase = len - uppercase;
    if(uppercase > lowercase){
        for(int i = 0; i < len; i++){
            if(s[i] >= 97 && s[i] <= 122){
               s[i] = toupper(s[i]);
            }
        }
    } else {
        for(int i = 0; i < len; i++){
            if(s[i] >= 65 && s[i] <= 90){
                s[i] = tolower(s[i]);
            }
        }
    }
    cout<<s;
    return 0;
}