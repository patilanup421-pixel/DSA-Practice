#include<iostream>
using namespace std;

void findKey(int arr[][3], int rows, int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                cout<<"row"<<i<<" "<<"col"<<j<<endl;
            }
        }
    }
}

int main(){
    int arr[3][3]={{1,6,3},{2,7,6},{6,4,7}};
    int rows=3;
    int cols=3;
    int key=6;
    findKey(arr,rows,cols,key);
    return 0;
}