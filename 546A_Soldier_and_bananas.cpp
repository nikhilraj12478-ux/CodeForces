#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int borrow = 0,sum = 0;
    for(int i = 1; i <= w; i++){
        sum += k * i;
    }
    if(n < sum){
        borrow = (sum - n);
    }
    cout<<borrow;
    return 0;
}