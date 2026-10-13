#include<iostream>
using namespace std;

int main(){
    int n,x = 0;
    cin>>n;
    string statement;
    for(int i = 0; i < n; i++){
        cin>>statement;
        if(statement == "++X" || statement == "X++"){
            x += 1;
        } else if(statement == "--X" || statement == "X--"){
            x -= 1;
        }
    }
    cout<<x;
    return 0;
}