#include<iostream>
using namespace std;

int main(){
    int coordinate;
    cin>>coordinate;
    int steps;
    if(coordinate % 5 == 0){
        steps = (coordinate / 5);
    } else {
        steps = (coordinate / 5) + 1;
    }
    
    cout<<steps;
    return 0;
}