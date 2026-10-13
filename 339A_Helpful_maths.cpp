#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int length = s.length();
    for(int i = 0; i < length-1; i += 2){
        for(int j = 0; j < length - i - 2; j += 2){
            if(s[j] > s[j+2]){
                int temp = s[j];
                s[j] = s[j+2];
                s[j+2] = temp;
            }
        }
    }
    cout<<s;
    return 0;
}