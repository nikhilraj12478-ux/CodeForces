#include<iostream>
using namespace std;

int main(){
    string username;
    cin>>username;
    int length = username.length();

    int count[26] = {0};

    for(int i = 0; i < length; i++){
        count[username[i] - 'a']++;
    }
    int distinct = 0;

    for(int i = 0; i < 26; i++){
        if(count[i] > 0){
            distinct++;
        }
    }

    if(distinct % 2 == 0){
       cout<<"CHAT WITH HER!"; 
    } else {
       cout<<"IGNORE HIM!";
    }
    

    return 0;
}