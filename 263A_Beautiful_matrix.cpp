#include<iostream>
using namespace std;

int main(){
    int matrix[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>matrix[i][j];
        }
    }
    int row,colm;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(matrix[i][j] == 1){
               row = i, colm = j;
            }
        }
    }
    cout<<abs(row - 2) + abs(colm - 2);
    return 0;
}