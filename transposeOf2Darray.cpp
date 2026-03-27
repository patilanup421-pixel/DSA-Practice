#include<iostream>
#include<climits>
using namespace std;

void getTranspose(int arr[][3], int rows, int cols, int transposeArr[][3]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            swap(arr[i][j], transposeArr[j][i]);
        }
    }
}

int printArr(int transposeArr[][3], int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<transposeArr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int arr[3][3]={{1,6,-2},{4,8,9},{-5,4,7}};
    int rows=3;
    int cols=3;
    int transposeArr[3][3];
    getTranspose(arr, rows, cols, transposeArr);
    printArr(transposeArr, rows, cols);
    return 0;
}

