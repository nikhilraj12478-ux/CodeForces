#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string colour;
    cin>>colour;
    int len = colour.length();
    int count = 0;
    for(int i = 0; i < len-1; i++){
        if(colour[i] == colour[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}