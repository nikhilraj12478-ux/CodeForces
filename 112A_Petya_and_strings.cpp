#include<iostream>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int len = s1.length();
    int output;
    for(int i = 0; i < len; i++){
        char a = tolower(s1[i]);
        char b = tolower(s2[i]);
        if(a < b){
            output = -1;
            break;
        }else if(a == b){
            output = 0;
        } else if(a > b){
            output = 1;
            break;
        }
    }
    cout<<output;
    return 0;
}